/*
 * @lc app=leetcode.cn id=160 lang=cpp
 * @lcpr version=21912
 *
 * [160] 相交链表
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
#include <unordered_map>
using namespace std;
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        // handle the conner case
        if (headA->next == nullptr && headB->next == nullptr) {
            return headA == headB ? headA : nullptr;
        }

        unordered_map<ListNode*,int> map;
        ListNode * p = headA;
        while (p != nullptr) {
            map[p] = p->val;
            p = p->next;
        }
        // check
        p = headB;
        while (p != nullptr) {
            if (map.find(p) != map.end() && map[p] == p->val) {
                return p;
            }
            p = p->next;
        }
        return nullptr;
    }
};
// @lc code=end



/*
// @lcpr case=start
// 8\n[4,1,8,4,5]\n[5,6,1,8,4,5]\n2\n3\n
// @lcpr case=end

// @lcpr case=start
// 2\n[1,9,1,2,4]\n[3,2,4]\n3\n1\n
// @lcpr case=end

// @lcpr case=start
// 0\n[2,6,4]\n[1,5]\n3\n2\n
// @lcpr case=end

 */

