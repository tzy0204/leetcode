/*
 * @lc app=leetcode.cn id=108 lang=cpp
 * @lcpr version=21909
 *
 * [108] 将有序数组转换为二叉搜索树
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
#include<stdio.h>
#include<vector>
using namespace std;
class Solution {
public:
  TreeNode* buildHBT(vector<int>& nums, int begin, int end) {
      // end condition
      if (end < begin) return nullptr;
      
      // create new node and asign value
      int med = (end + begin) / 2;
      TreeNode *node = new TreeNode(0);
      node->val = nums[med];
      
      // build left child
      node->left = buildHBT(nums, begin, med - 1);
      
      // build right child
      node->right =  buildHBT(nums, med + 1, end);
      
      // return node
      return node;
  }
  TreeNode* sortedArrayToBST(vector<int>& nums) {

      return buildHBT(nums, 0, nums.size()-1);
  }
};
// @lc code=end



/*
// @lcpr case=start
// [-10,-3,0,5,9]\n
// @lcpr case=end

// @lcpr case=start
// [1,3]\n
// @lcpr case=end

 */

