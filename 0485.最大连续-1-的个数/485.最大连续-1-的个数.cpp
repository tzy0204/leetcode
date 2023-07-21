/*
 * @lc app=leetcode.cn id=485 lang=cpp
 *
 * [485] 最大连续 1 的个数
 */

// @lc code=start
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int res = 0; // max length
        int cnt = 0; // current length
        for (int num : nums) {
            if (num == 1) {
                cnt++;
            } else {
                res = max(res, cnt);
                cnt = 0;
            }
        }
        // if the last element is 1, cnt will not be updated
        if (nums.back() == 1) {
            res = max(res, cnt);
        }
        return res;
    }
};
// @lc code=end

