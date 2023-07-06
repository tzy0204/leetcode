/*
 * @lc app=leetcode.cn id=237 lang=cpp
 * @lcpr version=21909
 *
 * [237] 删除链表中的节点
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        // handle the last node
        if (node->next == NULL) {
            node = NULL;
            return;
        }
        // handle the middle node
        node->val = node->next->val;
        node->next = node->next->next;
        // handle the first node
        // node = node->next;
               
    }
};
// @lc code=end



/*
// @lcpr case=start
// [4,5,1,9]\n5\n
// @lcpr case=end

// @lcpr case=start
// [4,5,1,9]\n1\n
// @lcpr case=end

 */

