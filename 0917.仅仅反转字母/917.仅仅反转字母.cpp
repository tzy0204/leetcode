/*
 * @lc app=leetcode.cn id=917 lang=cpp
 *
 * [917] 仅仅反转字母
 */

// @lc code=start
#include <stack>
using namespace std;
class Solution {
public:
    bool isAlpha(char c) {
            if (c >= 'A' && c <= 'Z' ||
                c >='a' && c <= 'z') {
                return true;
            }        
            return false;
    }
    string reverseOnlyLetters(string s) {
        // special case
        if (s.length() == 1) return s;
        stack<char> st;
        // 
        for (auto & c:s) {
            if (isAlpha(c)) {
                st.push(c);
            }
        }
        for (int i = 0; i < s.length();i++) {
            if (!isAlpha(s[i])) continue;
            s[i] = st.top();
            st.pop();
        }
        return s;
    }
};
// @lc code=end

