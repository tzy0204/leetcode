/*
 * @lc app=leetcode.cn id=21 lang=cpp
 * @lcpr version=21909
 *
 * [21] 合并两个有序链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // handle conern case
        if (list1 == nullptr)
            return list2;
        else if (list2 == nullptr)
            return list1;
        ListNode tempNode(0);
        ListNode *p1 = &tempNode; // used to point last meraged node
        ListNode *p2 = list1; // used to traverse list1
        ListNode *p3 = list2; // used to traverse list2

        // compare and merage
        while (p2 != nullptr && p3 != nullptr) {
            // p2 < p3
            if (p2->val < p3->val) {
                p1->next = p2;
                p1 = p1->next;
                p2 = p2->next;                
            }
            else { // p2 >= p3
                p1->next = p3;
                p1 = p1->next;                
                p3 = p3->next;
            }
        }
        
        //post process
        if (p2 == nullptr)
            p1->next = p3;
        else // p3 == nullptr
            p1->next = p2;
        
        return tempNode.next;
    }
};
// @lc code=end



/*
// @lcpr case=start
// [1,2,4]\n[1,3,4]\n
// @lcpr case=end

// @lcpr case=start
// []\n[]\n
// @lcpr case=end

// @lcpr case=start
// []\n[0]\n
// @lcpr case=end

 */

