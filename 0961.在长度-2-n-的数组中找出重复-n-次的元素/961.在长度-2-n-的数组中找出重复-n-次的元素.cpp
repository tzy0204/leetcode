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
        int res = -1;
        for (int i = 0; i < nums.size(); i++) {
            // nums 由 n + 1 个 不同的 元素组成，且其中一个元素恰好重复 n 次
            //                  ^^^^^^^^^^^^^
            // 表示其他數字不會重複，所以只要重複就是result
            if (map[nums[i]] != 0)return nums[i];
            map[nums[i]] +=1;
            // map[nums[i]] +=1;
            // if (map[nums[i]] == (nums.size() / 2)) {
            //     res = nums[i];
            //     break;
            // }
        }
        return res;
    }
};
// @lc code=end

