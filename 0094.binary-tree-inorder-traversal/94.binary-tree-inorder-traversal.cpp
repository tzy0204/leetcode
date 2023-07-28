/*
 * @lc app=leetcode.cn id=94 lang=cpp
 * @lcpr version=21912
 *
 * [94] 二叉树的中序遍历
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
#include <vector>
using namespace std;
class Solution {
public:
    void inOrder(TreeNode *root, vector<int>& v) {
        // end condition
        if (root == nullptr) return;
        if (root->left != nullptr) inOrder(root->left, v);
        v.push_back(root->val);
        if (root->right != nullptr) inOrder(root->right,v);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>res;
        // handle conner case
        if (root == nullptr) return res;
        inOrder(root, res);
        return res;
    }
};
// @lc code=end



/*
// @lcpr case=start
// [1,null,2,3]\n
// @lcpr case=end

// @lcpr case=start
// []\n
// @lcpr case=end

// @lcpr case=start
// [1]\n
// @lcpr case=end

 */

