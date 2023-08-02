/*
 * @lc app=leetcode.cn id=961 lang=cpp
 *
 * [961] 在长度 2N 的数组中找出重复 N 次的元素
 */

// @lc code=start
#include <unordered_map>
using namespace std;
class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int,int> map;
        int res;
        for (int i = 0; i < nums.size(); i++) {
            map[nums[i]] +=1;
            if (map[nums[i]] == (nums.size() / 2)) {
                res = nums[i];
                break;
            }
        }
        return res;
    }
};
// @lc code=end

