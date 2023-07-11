/*
 * @lc app=leetcode.cn id=234 lang=cpp
 * @lcpr version=21909
 *
 * [234] 回文链表
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
    ListNode* reverseList(ListNode* head) {
        ListNode tempNode(0);
        ListNode *p1 = &tempNode;
        ListNode *p2 = head;
        ListNode *p3;

        // check single node
        if (head == nullptr || head->next == nullptr)
            return head;
        p3 = p2->next;

        // reverse
        while (p3 != nullptr) {
            p2 ->next = p1;
            p1 = p2;
            p2 = p3;
            p3 = p3->next;
        }
        // post process
        p2->next = p1;
        head->next = nullptr;
        head = p2;
        return head;
    }
    
    bool isPalindrome(ListNode* head) {
        // handle conern case
        if (head == nullptr)
            return false;
        else if (head->next == nullptr)
            return true;
        
        // step1: find meddle postion via two pointers;
        ListNode *fast = head;
        ListNode *slow = head;

        while (fast != nullptr && fast->next != nullptr) {
            fast = fast->next->next;
            slow = slow->next;
        }
        
        // step2: reverse ListNode from meddle to last
        ListNode *second = reverseList(slow);
        
        // step3: compare
        while (second != nullptr) {
            if (head->val != second->val)
                return false;
            head = head->next;
            second = second->next;
        }
        return true;
    }
};
// @lc code=end



/*
// @lcpr case=start
// [1,2,2,1]\n
// @lcpr case=end

// @lcpr case=start
// [1,2]\n
// @lcpr case=end

 */

