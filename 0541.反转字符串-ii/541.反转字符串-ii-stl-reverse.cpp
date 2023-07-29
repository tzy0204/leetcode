/*
 * @lc app=leetcode.cn id=541 lang=cpp
 *
 * [541] 反转字符串 II
 */

// @lc code=start
#include <algorithm>
using namespace std;
class Solution {
public:
    string reverseStr(string s, int k) {
        // handle conner case
        if (s.length() == 1) return s;
        // if (s.length() < k) return reverse(s.begin(), s.end());
        // s = "abcdefg", k = 2, length = 7
        //      ^   ^
        // i    i + k   i + 2k  s
        // =============================
        // 0    2       4       bacdefg
        // 4    6       8       bacdfeg   

        for (int i = 0; i < s.length(); i+=2*k) {
            if (i + k > s.length()) {
                 reverse(&s[i], &s[s.length()]);
                //reverse(s.begin()+i, s.end());
            }
            else {
                reverse(&s[i], &s[i+k]);
                //reverse(s.begin()+i, s.begin()+i+k);                
            }
        }
        return s;
    }
};
// @lc code=end

