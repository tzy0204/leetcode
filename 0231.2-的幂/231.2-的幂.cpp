/*
 * @lc app=leetcode.cn id=231 lang=cpp
 *
 * [231] 2 的幂
 */

// @lc code=start
class Solution {
public:
    bool isPowerOfTwo(int n) {        
        // iteration
        // 8 , 8 % 2 == 0  
        // 4 , 4 % 2 == 0
        // 2 , 2 % 2 == 0
        // 1 , 1 % 2 == 1
        if (n <= 0) return false;
        while (n % 2 == 0) {
            n = n/2;
        }
        return n == 1;

        // bitmap 
        // if (n <= 0 ) return false;
        // // 8 : 1000
        // // 7 : 0111
        // //---------
        // // & : 0000
        // long result = n & (n-1);
        // return result == 0;
    }
};
// @lc code=end

