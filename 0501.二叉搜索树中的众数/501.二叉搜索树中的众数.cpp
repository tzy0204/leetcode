/*
 * @lc app=leetcode.cn id=501 lang=cpp
 *
 * [501] 二叉搜索树中的众数
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
#include<unordered_map>
using namespace std;
class Solution {    
public:
    // compose inorder vector
    void composePreorderhash(unordered_map<int, int> & v, TreeNode* root) {
        if (root == nullptr) {
            //v.push_back(INT32_MIN);
            return;
        }
        else {
            // push root->val
            v[root->val] = v[root->val] + 1;            
            // left
            composePreorderhash(v, root->left);
            // right
            composePreorderhash(v, root->right);
        }
    }
    vector<int> findMode(TreeNode* root) {
        // handle conner case
        if (root == nullptr) return vector<int>();
        if (root->left == nullptr && root->right == nullptr) return vector<int>{root->val};
        unordered_map<int, int> hash;
        composePreorderhash(hash, root);

        // find max
        int max = 0;
        
        for (auto it = hash.begin(); it != hash.end(); it++) {
            if (it->second > max) max = it->second;
        }
        // find max's key, push into res
        // <<the max's key may be more than one>>!!!
        vector<int> res;
        for (auto it = hash.begin(); it != hash.end(); it++) {
            if (it->second == max) res.push_back(it->first);
        }
        return res;
    }
};
// @lc code=end

