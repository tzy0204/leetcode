// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem283.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=283 lang=cpp
 *
 * [283] 移动零
 */
#include<vector>
// @lc code=start
class Solution {
// nums         i   s    
// [0,1,0,3,12] 0   0
// [1,1,0,3,12] 1   1
// [1,1,0,3,12] 2   1
// [1,3,0,3,12] 3   2
// [1,3,12,3,12]4  3

public:
    void moveZeroes(vector<int>& nums) {
        int s = 0;
        for (int i = 0; i < nums.size();i++){
            if (nums[i] != 0) {
                nums[s] = nums[i];
                s++;
            }

        }
        for (int i = s; i<nums.size();i++) {
            nums[i] = 0;
        }
    }
};
// @lc code=end

