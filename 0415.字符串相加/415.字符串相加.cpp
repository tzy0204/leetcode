/*
 * @lc app=leetcode.cn id=415 lang=cpp
 *
 * [415] 字符串相加
 */

// @lc code=start
class Solution {
public:
    string addStrings(string num1, string num2) {
        // two pointers
        int i = num1.size()-1;
        int j = num2.size()-1;
        int carry = 0;
        string res = "";

        // handle common part
        while (i >= 0 && j >=0) {
            int sum = (num1[i] - '0') + (num2[j] - '0') + carry;
            res.push_back((char)(sum%10 + '0'));
            carry = sum / 10;
            i--;
            j--;
        }
        // handle the rest part
        while (i >= 0) {
            int sum = (num1[i] - '0') + carry;
            res.push_back((char)(sum%10 + '0'));
            carry = sum / 10;
            i--;
        }
        while (j >=0) {
            int sum = (num2[j] - '0') + carry;
            res.push_back((char)(sum%10 + '0'));
            carry = sum / 10;
            j--;
        }
        // handle the last carry
        if (carry == 1) {
            res.push_back('1');
        }
        // reverse the result
        reverse(res.begin(), res.end());
        return res;
    }
};
// @lc code=end

