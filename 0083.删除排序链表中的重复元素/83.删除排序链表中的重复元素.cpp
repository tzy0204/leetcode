/*
 * @lc app=leetcode.cn id=83 lang=cpp
 *
 * [83] 删除排序链表中的重复元素
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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode * current = head;
        ListNode * next = nullptr;
        // handle corner case
        if (head == nullptr || head->next == nullptr) return head;
        next = current->next;
        // while loop
        while (current != nullptr) {
            // if current->val == next->val, delete next
            if (current->val == next->val) {
                current->next = next->next;
                next = next->next;
            }
            // else, move current and next
            else {
                current = current->next;
                next = next->next;                
            }
            // if next == nullptr, break
            if (next == nullptr) break;
        }
        return head;
    }
};
// @lc code=end

