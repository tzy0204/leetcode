// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem868.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=868 lang=cpp
 *
 * [868] 二进制间距
 */

// @lc code=start
class Solution {
public:
    int binaryGap(int n) {
        int res = 0;
        int prev = -1;
        int i;
        while (n > 0) {
            // to update longest distance if lowest bit is 1 using mod 2.
            if (n % 2 == 1) {
                if (prev != -1 && i - prev > res) {
                    res = i - prev;
                }
                // update prev
                prev = i;
            }
            //next iteration
            i++;
            n = n/2;
        }
        return res;
    }
};
// @lc code=end

