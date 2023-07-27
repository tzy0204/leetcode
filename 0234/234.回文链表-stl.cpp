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
#include <list>
using namespace std;
class Solution {
public:
   
    bool isPalindrome(ListNode* head) {
        // handle conern case
        if (head == nullptr)
            return false;
        else if (head->next == nullptr)
            return true;
        
        // double linked list
        ListNode *p1 = head;
        list<int> myList;
        while (p1 != nullptr) {
            myList.push_back(p1->val);
            p1 = p1->next;
        }    

        // compare
        for (auto it = myList.rbegin(); it != myList.rend(); it++) {
            if (*it != head->val)
                return false;
            head = head->next;
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

