// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem643.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=643 lang=cpp
 *
 * [643] 子数组最大平均数 I
 */

// @lc code=start
#include <map>
#include <vector>
using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        // 1. calculate sum of first k elements
        int sum = 0;
        for (int i = 0; i < k; i++) {
            sum += nums[i];
        }
        // 2. calculate sum of other elements
        int maxSum = sum;
        // for (int i = k; i < nums.size(); i++) {
        //     sum += nums[i] - nums[i-k];
        //     maxSum = max(maxSum, sum);
        // }
        for (int i = 1; (i + k) <= nums.size(); i++) {
            sum = sum + nums[i+k-1] - nums[i-1];
            if (sum > maxSum) {
                maxSum = sum;
            }
        }
        // 3. calculate average
        return (double)maxSum / k;
    }
};
// @lc code=end

