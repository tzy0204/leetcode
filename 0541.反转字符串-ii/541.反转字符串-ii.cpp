/*
 * @lc app=leetcode.cn id=541 lang=cpp
 *
 * [541] 反转字符串 II
 */

// @lc code=start
class Solution {
public:
    string reverseStr(string s, int k) {
        //using string reverse
        int n = s.size();
        for (int i = 0; i < n; i += 2 * k) {
            if (i+k > n) {
                reverse(s.begin()+i, s.end());
            } else {
                reverse(s.begin()+i, s.begin()+i+k);
            }
        }
        return s;
    }
};
// @lc code=end

