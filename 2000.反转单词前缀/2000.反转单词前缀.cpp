/*
 * @lc app=leetcode.cn id=2000 lang=cpp
 *
 * [2000] 反转单词前缀
 */

// @lc code=start
#include<string>
#include<algorithm>
using namespace std;
class Solution {
public:
    string reversePrefix(string word, char ch) {
        // handle one char case
        if (word.length() == 1) {
            return word;
        }
        for (int i=0; i < word.length(); i++) {
            if (word[i] == csh) {
                reverse(word.begin(), word.begin()+i+1);
                return word;
            }
        }
        return word;
    }
};
// @lc code=end

