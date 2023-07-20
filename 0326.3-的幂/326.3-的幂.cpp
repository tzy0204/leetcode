/*
 * @lc app=leetcode.cn id=326 lang=cpp
 *
 * [326] 3 的幂
 */

// @lc code=start
class Solution {
public:
    bool isPowerOfThree(int n) {
        // iteration
        // 27 , 37 % 3 == 0  
        // 9 , 9 % 3 == 0
        // 3 , 3 % 3 == 0
        // 1 , 1 % 3 == 1
        if (n <= 0) return false;
        while (n % 3 == 0) {
            n = n/3;
        }
        return n == 1;
    }
};
// @lc code=end

