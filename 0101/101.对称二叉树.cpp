// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem101.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=101 lang=cpp
 * @lcpr version=21909
 *
 * [101] 对称二叉树
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
#include "queue"
#include <vector>
using namespace std;
class Solution {    
public:
    void preorder(vector<int> &v, TreeNode *root, bool isLeft) {
        // the position is important, so push invalid value here
        if (root == nullptr) {
            v.push_back(-255);
            return;
        }
        if (isLeft == true) {
            v.push_back(root->val);
            preorder(v, root->left, true);
            preorder(v, root->right, true);            
        }
        else {
            v.push_back(root->val);
            preorder(v, root->right, false);
            preorder(v, root->left, false);                
        }
    }
    bool isSymmetric(TreeNode* root) {
        //1. handle conorn case
        if (root == nullptr) return true;
        if (root->left == nullptr && root->right == nullptr) return true;
        
        //2. push both of left and right tree to vector via preorder()
        vector <int> vl;
        vector <int> vr;
       
        preorder(vl, root->left, true);
        preorder(vr, root->right, false);
        // for (auto it1 : vl) cout << it1 <<' ';
        // for (auto it2 : vr) cout << it2 <<' ';        
        
        //3. compare
        return vl == vr;
    }
};
// @lc code=end



/*
// @lcpr case=start
// [1,2,2,3,4,4,3]\n
// @lcpr case=end

// @lcpr case=start
// [1,2,2,null,3,null,3]\n
// @lcpr case=end

 */

