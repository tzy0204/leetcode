// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem459.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=459 lang=cpp
 *
 * [459] 重复的子字符串
 */

// @lc code=start
class Solution {
public:
bool repeatedSubstringPattern(string s) {
        int n=s.size();
        //commented below
        for(int i=n/2;i>=1;i--) {
            //i is expressing the size of the substring forming-->if length of the substring(i.e, i) divides n equally then we can say the substring can be/may be a possible solution,so we check further,else we skip.
            if(n%i==0){
                //rotation approach
                // s = "abcabcabcabc"
                //      012345678901
                //            ^ 
                // n = 12
                //if two substrings from first and last match then we can say they can repeatedly form the string.
                // i          substr(0,n-i)    substr(i,n-i)
                // 6          abcabc           abcabc
                if(s.substr(0,n-i) == s.substr(i,n-i)) return true;
            }
        }
        return false;
    }
};
// @lc code=end

