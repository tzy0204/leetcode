// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem572.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=572 lang=cpp
 *
 * [572] 另一棵树的子树
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
#include<vector>
using namespace std;
class Solution {
    // compose inorder vector
    void composePreorderVector(vector<int> & v, TreeNode* root) {
        if (root == nullptr) {
            v.push_back(INT32_MIN);
            return;
        }
        else {
            // push root->val
            v.push_back(root->val);
            // left
            composePreorderVector(v, root->left);
            // right
            composePreorderVector(v, root->right);
        }
    }
    
public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        // compose inorder vector
        vector<int> v1, v2;
        composePreorderVector(v1, root);
        composePreorderVector(v2, subRoot);
        // find v2 in v1
        for (int i = 0; i < v1.size(); i++) {
            if (v1[i] == v2[0]) {
                bool flag = true;
                for (int j = 0; j < v2.size(); j++) {
                    if (v2[j] != v1[i+j]) {
                        flag = false;
                        break;
                    }
                }
                if (flag) return true;
            }
        }
        return false;
    }
};
// @lc code=end

