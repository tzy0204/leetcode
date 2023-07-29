// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem557.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=557 lang=cpp
 *
 * [557] 反转字符串中的单词 III
 */

// @lc code=start
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        string result,word;
        char * c = &s[0];
        int x = 0;
        for (int i =0; i < s.size(); i++) {
            if (s[i] == ' ') {
                // reverse(c, &s[i]);
                reverse(&s[x], &s[i]);
                //c = &s[i + 1];
                x = i + 1;
            }
        }
        reverse(&s[x], &s[s.size()]);
        return s;
    }
};
// @lc code=end

