/*
 * @lc app=leetcode.cn id=13 lang=cpp
 * @lcpr version=21913
 *
 * [13] 罗马数字转整数
 */

// @lc code=start
#include "unordered_map"
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        unordered_map <char,int> map;
        map['I'] = 1;
        map['V'] = 5;
        map['X'] = 10;
        map['L'] = 50;
        map['C'] = 100;
        map['D'] = 500;
        map['M'] = 1000;
        // handle special case
        if (s.length() == 1) return map[s[0]];
        int res = 0;
        for (int i=0; i < s.length();i++) {
            if      (s[i] == 'I' && (s[i+1] == 'V' || s[i+1] == 'X')) res -= 1;
            else if (s[i] == 'X' && (s[i+1] == 'L' || s[i+1] == 'C')) res -= 10;
            else if (s[i] == 'C' && (s[i+1] == 'D' || s[i+1] == 'M')) res -= 100;
            else {
                res += map[s[i]];
            }            
        }
        return res;
    }
};
// @lc code=end



/*
// @lcpr case=start
// "III"\n
// @lcpr case=end

// @lcpr case=start
// "IV"\n
// @lcpr case=end

// @lcpr case=start
// "IX"\n
// @lcpr case=end

// @lcpr case=start
// "LVIII"\n
// @lcpr case=end

// @lcpr case=start
// "MCMXCIV"\n
// @lcpr case=end

 */

