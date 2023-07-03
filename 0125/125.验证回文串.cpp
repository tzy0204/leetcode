/*
 * @lc app=leetcode.cn id=125 lang=cpp
 *
 * [125] 验证回文串
 */
using namespace std;
// @lc code=start
class Solution {
public:
    bool isPalindrome(string s) {

        //remove all non-alphanumeric characters
        string s1;
        for (char c: s) {
            if (c >= 'a' && c <= 'z') {
                s1 += c;
            }
            else if (c >= 'A' && c <= 'Z') {
                s1 += c + 32;

            }
            else if (c >= '0' && c <= '9') {
                s1 += c;
            }
        }
        //empty string check
        if (s1.size() == 0) return true;

        //compare
        int j = s1.size() - 1;
        for (int i = 0; i< s1.size(); i++) {
            if (s1[i] != s1[j]) {
                return false;
            }
            j--;
        }
        return true;
    }
};
// @lc code=end

