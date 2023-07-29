// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem344.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=344 lang=cpp
 * @lcpr version=21912
 *
 * [344] 反转字符串
 */

// @lc code=start
#include <string>
#include <algorithm>
#include <iostream>
using namespace std;
class Solution {
public:
    string reverseWords(string s) {
        string res;
        auto second = s.find(' ');
        while (second != string::npos) {
            reverse(s.begin(), second);
            //res += reverse(s.begin(), second) + ' ';
            s = s.substr(second + 1);
            second = s.find(' ');
        }
        res += s;
        return res;
    }
};
// @lc code=end



/*
// @lcpr case=start
// ["h","e","l","l","o"]\n
// @lcpr case=end

// @lcpr case=start
// ["H","a","n","n","a","h"]\n
// @lcpr case=end

 */

