// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem401.h"
#include <bitset>
using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=401 lang=cpp
 *
 * [401] 二进制手表
 */

// @lc code=start
class Solution
{
public:
    vector<string> readBinaryWatch(int num)
    {
        vector<string> res;
        for (int h = 0; h < 12; h++)
        {
            for (int m = 0; m < 60; m++)
            {
                // if (bitset<10>((h << 6) + m).count() == num)
                if (bitset<4>(h).count() + bitset<6>(m).count() == num) {
                    res.push_back(to_string(h) + (m < 10 ? ":0" : ":") + to_string(m));
                }
            }
        }
        return res;
    }
};
// @lc code=end

