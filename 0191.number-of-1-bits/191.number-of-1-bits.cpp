/*
 * @lc app=leetcode.cn id=191 lang=cpp
 * @lcpr version=21912
 *
 * [191] 位1的个数
 */
#include <unordered_map>
using namespace std;
// @lc code=start
class Solution {
public:
    
    int hammingWeight(uint32_t n) {
        int count = 0;
        while (n > 0) {
            count++;
            n = n & (n-1);
        }
        return count;
    }
};
// @lc code=end



/*
// @lcpr case=start
// 00000000000000000000000000001011\n
// @lcpr case=end

// @lcpr case=start
// 00000000000000000000000010000000\n
// @lcpr case=end

// @lcpr case=start
// 11111111111111111111111111111101\n
// @lcpr case=end

 */

