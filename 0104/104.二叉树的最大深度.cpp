// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem104.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=104 lang=cpp
 * @lcpr version=21909
 *
 * [104] 二叉树的最大深度
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
#include<iostream>
#include<queue>
using namespace std;
class Solution {
public:
    int maxDepth(TreeNode* root) {
        queue<TreeNode*> q;
        if (root == nullptr) return 0;
        
        q.push(root);
        // at latest has one level
        int depth = 0;
        
        while (q.empty() == false) {
            int temp = q.size();
            for (int i = 0; i < temp;i++) {
                TreeNode *node = q.front();
                q.pop();
                if (node->left != nullptr) 
                    q.push(node->left);
                if (node->right != nullptr)
                    q.push(node->right);                
            }
            depth++;
            
        }
        return depth;
        
    }
};
// @lc code=end



