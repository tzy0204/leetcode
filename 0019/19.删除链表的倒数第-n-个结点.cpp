/*
 * @lc app=leetcode.cn id=19 lang=cpp
 * @lcpr version=21909
 *
 * [19] 删除链表的倒数第 N 个结点
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count = 0;
        int stepCount;
        ListNode *p = head; // used to count lenth of listNode
        ListNode *q = head; // node's pos before removal
        
        // step1: count the length of listNode
        while (p != nullptr) {
            count++;
            p = p->next;
        }

        // handle conern case
        stepCount = count - n;
        if (count == 0) // ListNode only has one element
            return nullptr;            
        else if (stepCount == 0) // first node should be removed
            return head->next;

        //Input: head = [1,2,3,4,5], n = 2
        //Output: [1,2,3,5]
        //stepCount = 3, q=1, q->next = 2
        //stepCount    q   q->next
        //2            2   3
        //1            3   4 <= stop here
        //0            4   5
        while (stepCount > 1) {
            q = q->next;
            stepCount--;
        }
        // point to next 2 node;
        q->next = q->next->next;                    
        return head;
    }
};
// @lc code=end



/*
// @lcpr case=start
// [1,2,3,4,5]\n2\n
// @lcpr case=end

// @lcpr case=start
// [1]\n1\n
// @lcpr case=end

// @lcpr case=start
// [1,2]\n1\n
// @lcpr case=end

 */

