// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include <stack>
#include "commoncppproblem98.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=98 lang=cpp
 * @lcpr version=21909
 *
 * [98] 验证二叉搜索树
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    TreeNode *last;
public:
    void putAllLeftToStack(stack <TreeNode*> &s, TreeNode *node) {
        while (node != nullptr) {
            s.push(node);
            node = node->left;
        }        
    }
    
    bool isValidBST(TreeNode* root) {
        // recursive
        // if (root == nullptr) return true;
        // if (!isValidBST(root->left)) return false;
        // if (last != nullptr && root->val <= last->val) return false;
        // last = root;
        // return isValidBST(root->right);
        
        // stack
        // conern case
        if (root == nullptr) return true;
        if (root->left == nullptr && root->right == nullptr) return true;
        
        stack <TreeNode*> s;
        TreeNode *node = root;
        //int lastVal = INT32_MIN;
        int64_t lastVal = INT64_MIN;
        //push to stack and check left subtree
         putAllLeftToStack(s, node);

        while (!s.empty()) {
            node = s.top();
            s.pop();
            // check left child
            // binary tree's root should always bigger than last value(left)
            if (node->val <= lastVal) return false;
            
            // update lastVal
            lastVal = node->val;
            
            //check right child
            node = node->right;
            putAllLeftToStack(s, node);
        }
        
        return true;
    }
};
// @lc code=end



/*
// @lcpr case=start
// [2,1,3]\n
// @lcpr case=end

// @lcpr case=start
// [5,1,4,null,null,3,6]\n
// @lcpr case=end

 */

