/*
 * @lc app=leetcode.cn id=88 lang=cpp
 *
 * [88] 合并两个有序数组
 */

// @lc code=start
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // handle conner case
        if (n == 0) return;
        if (m == 0) {
            nums1 = nums2;
            return;
        }

        // put nums2 into nums1 from index m
        for (int i = 0; i < n; i++) {
            nums1[m+i] = nums2[i];
        }

        // sort nums1
        sort(nums1.begin(), nums1.end());
    }
};
// @lc code=end

