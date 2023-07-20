// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem482.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=482 lang=cpp
 *
 * [482] 密钥格式化
 */

// @lc code=start
#include <cctype>
#include <string>
using namespace std;
class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        // 1. remove '-' and convent to upper
        // "2-5g-3-J" -> s1="25G3J"
        string s1;
        for (int i = 0; i < s.size();i++) {
            if (s[i] != '-') {
                s1 += toupper(s[i]);
            }
        }
        // handle special case
        if (s1.size() == 0) {
            return "";
        }
        
        // 2. handle header via % k
        // i = 1
        string s2;
        int i = s1.size() % k;
        if (i != 0) {
            s2 = s1.substr(0,i);
            s2 += '-';
        }
        // s2 = "2-"

        // 3. add dash
        // i    s2
        // -------------------
        // 1    "2-5G-"
        // 3    "2-5G-3J-"
        for (; i < s1.size(); i+=k) {
            s2 += s1.substr(i,k);
            s2 += '-';
        }
        // remove last '-'
        //"2-5G-3J-" -> "2-5G-3J"
        s2.pop_back();
        return s2;
    }
};
// @lc code=end

