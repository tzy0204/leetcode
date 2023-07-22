/*
 * @lc app=leetcode.cn id=543 lang=cpp
 *
 * [543] 二叉树的直径
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
    int diameter = 0;
    int dfs(TreeNode *root) {
        // end condition
        if (root == nullptr) return 0;
        // handle left node
        int left = dfs(root->left); 
        // handle right node
        int right = dfs(root->right);
        // update diameter
        if (left + right > diameter) {
            diameter = left + right;
        }
        // return the depth of current node
        return max(left, right) + 1;
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        // based on tree height to solve this problem
        dfs(root);
        return diameter;
    }
};
// @lc code=end

