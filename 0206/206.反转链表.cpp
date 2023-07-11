// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem206.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=206 lang=cpp
 * @lcpr version=21909
 *
 * [206] 反转链表
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
};
// @lc code=end



/*
// @lcpr case=start
// [1,2,3,4,5]\n
// @lcpr case=end

// @lcpr case=start
// [1,2]\n
// @lcpr case=end

// @lcpr case=start
// []\n
// @lcpr case=end

 */

