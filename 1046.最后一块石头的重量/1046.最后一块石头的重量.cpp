/*
 * @lc app=leetcode.cn id=1046 lang=cpp
 *
 * [1046] 最后一块石头的重量
 */

// @lc code=start
#include <algorithm>
#include <vector>
using namespace std;
class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        // handle corner case
        if (stones.size() == 1) return stones[0];
        // sort stones
        sort(stones.begin(), stones.end());
        // while loop
        while (stones.size() > 1) {
            // pop the last two elements
            int y = stones.back();
            stones.pop_back();
            int x = stones.back();
            stones.pop_back();
            // if x != y, push back the difference
            if (x != y) stones.push_back(y - x);
            // sort stones
            sort(stones.begin(), stones.end());
        }
        // return the last element
        if (stones.size() == 0) return 0;
        return stones[0];

    }
};
// @lc code=end

