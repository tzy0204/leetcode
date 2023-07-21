/*
 * @lc app=leetcode.cn id=389 lang=cpp
 *
 * [389] 找不同
 */

// @lc code=start
class Solution {
public:
    char findTheDifference(string s, string t) {
        // handle conner condition
        if (s.empty()) return t[0];
        char result = {};
        // store short string to unordered_map        
        unordered_map<char, int> map;
        if (s.size() > t.size()) {
            for (auto& it : t) {
                map[it]++;
            }
            // find the difference
            for (auto& it : s) {
                if (map[it] == 0) {
                  result = it;  
                  break;
                }
                map[it]--;
            }
        }
        else {
            for (auto& it : s) {
                map[it]++;
            }
            // find the difference
            for (auto& it : t) {
                if (map[it] == 0) {
                  result = it;  
                  break;
                }
                map[it]--;                
            }            
        }
        return result;
    }
};
// @lc code=end

