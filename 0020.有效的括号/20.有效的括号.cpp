/*
 * @lc app=leetcode.cn id=20 lang=cpp
 *
 * [20] 有效的括号
 */

// @lc code=start
#include <stack>
#include <string>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        // 1. create a stack
        stack <char> st;
        // 2. traverse s
        for (int i = 0; i < s.size();i++) {
            // 3. if s[i] is left bracket, push it into stack
            if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
                st.push(s[i]);
            }            
            // 4. if s[i] is right bracket, pop stack and compare
            else {
                // handle special case
                if (st.empty() == true) return false;
                
                char c = st.top();
                st.pop();
                if (s[i] == ')') {
                    if (c != '(') return false;                
                } 
                if (s[i] == ']') {
                    if (c != '[') return false;                
                }              
                if (s[i] == '}') {
                    if (c != '{') return false;                
                }                    
            }
        }

        // 5. if stack is empty, return true
        return st.empty();

    }
};
// @lc code=end

