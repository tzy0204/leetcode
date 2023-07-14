/*
 * @lc app=leetcode.cn id=102 lang=cpp
 * @lcpr version=21909
 *
 * [102] 二叉树的层序遍历
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
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        vector<vector<int>> vec; // result
        vector <int> v1; // used to store val list in the same level
        // handle cornon case
        if (root == nullptr) return vec;
        if (root->left == nullptr && root->right == nullptr) {
            v1.push_back(root->val);
            vec.push_back(v1);
            return vec;
        }
        
        TreeNode *node = root; // used to point current node
        queue <TreeNode*> q; // used to store node addr in the same level
        q.push(root);
        
        while (!q.empty()) {
            int count = q.size();            
            for (int i = 0; i < count; i++) {
                node = q.front();
                q.pop();
                v1.push_back(node->val);
                if (node->left != nullptr) {
                    // push to queue
                    q.push(node->left);
                }
                if (node->right != nullptr) {
                    // push to queue                    
                    q.push(node->right);
                }
            }
            // push level vector to result & clear v1
            vec.push_back(v1);
            v1.clear();
        }
        return vec;

    }
};
// @lc code=end



/*
// @lcpr case=start
// [3,9,20,null,null,15,7]\n
// @lcpr case=end

// @lcpr case=start
// [1]\n
// @lcpr case=end

// @lcpr case=start
// []\n
// @lcpr case=end

 */

