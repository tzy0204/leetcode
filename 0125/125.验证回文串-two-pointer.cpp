// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem125.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=125 lang=cpp
 * @lcpr version=21912
 *
 * [125] 验证回文串
 */
#include <string>
using namespace std;
// @lc code=start
class Solution {
public:
    bool isPalindrome(string s) {
        // handle conner case
        if (s.size() == 1) return true;

        // remove non alpha and transfer upper case to lower case
        string res;
        for (auto & c: s) {
            if ((c >= 'a' && c <= 'z') ||
                (c >= '0' && c <= '9')) 
                res +=c;
            else if (c >= 'A' && c <= 'Z') {
                char tempC = c + ('a' - 'A');
                res += tempC;
            }
        }
        // handle special case
        if (res.empty()) return true;

        // compare
        int j = res.size() - 1;
        for (int i = 0; i < j; i++) {
            if (res[i] != res[j]) return false;
            j--;
        }
        return true;
    }
};
// @lc code=end



/*
// @lcpr case=start
// "A man, a plan, a canal: Panama"\n
// @lcpr case=end

// @lcpr case=start
// "race a car"\n
// @lcpr case=end

// @lcpr case=start
// " "\n
// @lcpr case=end

 */

