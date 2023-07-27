// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem50.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=50 lang=cpp
 *
 * [50] Pow(x, n)
 */

// @lc code=start
class Solution {
public:
    double myPow(double x, int n) {
        double res = 1;
        // n = 10; res = 1; x = 2
        // n     n%2    res     x
        // ======================
        // 10           1       2^1 = 2
        // 5     0              2^2 = 4
        // 2     1      4       2^4 = 16
        // 1     0              2^6 = 256  
        // 0     1      1024    2^16 = 65536
        while (n) {
            if (n % 2) {
                if (n > 0) {
                    res = res * x;
                }
                else {
                    res = res / x;
                }
            }
            x = x * x;
            n /= 2;
        }
        return res;
    }
};
// @lc code=end

