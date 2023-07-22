/*
 * @lc app=leetcode.cn id=520 lang=cpp
 *
 * [520] 检测大写字母
 */

// @lc code=start
class Solution {
public:
    bool detectCapitalUse(string word) {
        // 1. check first char
        bool first_capital = (word[0] >= 'A' && word[0] <= 'Z');

        // 2. check the second char
        bool second_capital = (word[1] >= 'A' && word[1] <= 'Z');

        // handle two letter case
        if (word.size() == 2) {
            if (!first_capital && second_capital)  return false;
            else return true;
        }

        // 4. check the rest of chars
        for (int i = 2; i < word.size(); i++) {
            // both of first and second are capital, only accept capital
            if (first_capital && second_capital) {
                if (word[i] >= 'a' && word[i] <= 'z') {
                    return false;
                }
            }
            // both of first and second are not capital, only accept not capital
            else if (!first_capital && !second_capital) {
                if (word[i] >= 'A' && word[i] <= 'Z') {
                    return false;
                }
            }
            // first is capital, second is not capital, only accept not capital
            else if (first_capital && !second_capital) {
                if (word[i] >= 'A' && word[i] <= 'Z') {
                    return false;
                }
            }
            // first is not capital, second is capital, return false
            else  {
                return false;
            }
        }       
        return true;
    
    }
};
// @lc code=end

