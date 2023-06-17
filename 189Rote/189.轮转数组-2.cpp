// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem189.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=189 lang=cpp
 *
 * [189] 轮转数组
 */
using namespace std;
// @lc code=start
class Solution {
public:
    void rotate(vector<int> &nums, int k)
    {
        int n = nums.size();
        vector<int> dummy(n);
        for (int i = 0; i < n; i++)
        {
            dummy[(i + k) % n] = nums[i];
        }
        nums.assign(dummy.begin(), dummy.end());
    }
};
// @lc code=end

