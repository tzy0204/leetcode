/*
 * @lc app=leetcode.cn id=409 lang=cpp
 *
 * [409] 最长回文串
 */

// @lc code=start
#include <unordered_map>
using namespace std;
class Solution {
public:
    int longestPalindrome(string s) {
        // handle corner case
        if (s.size() == 0) return 0;
        if (s.size() == 1) return 1;
        // using unordered map to store each char count
        unordered_map <char,int> umap;
        int oddCount = 0;
        for (int i =0; i < s.size(); i++) {
            umap[s[i]]++;
        }
        // for (auto it = umap.begin(); it != umap.end(); it++) {
        for (auto& it : umap) {            
            if (it.second % 2 == 1) oddCount++;
        }

        // if oddCount > 0 then result will be size of string - oddCount + 1
        if (oddCount > 0) 
            return (s.size() - oddCount + 1);
        else 
            return s.size();
    }
};
// @lc code=end

