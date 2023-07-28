// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem402.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=402 lang=cpp
 *
 * [402] 移掉 K 位数字
 */

// @lc code=start
#include <string>
#include <stack>
using namespace std;
class Solution {
public:
    string removeKdigits(string num, int k) {
        if (num.size() == k) return "0";
        
        // remove the digits
        stack<char> s;
        for (int i = 0; i < num.size(); i++) {
            while (!s.empty() && k > 0 && s.top() > num[i]) {
                s.pop();
                k--;
            }
            s.push(num[i]);
        }
        while (k > 0) {
            s.pop();
            k--;
        }
        
        // construct the result
        string res = "";
        while (!s.empty()) {
            res = s.top() + res;
            s.pop();
        }
        // handle the special case, leading zeros
        int startIndex = 0;
        for (auto c : res) {
            if (c == '0') {
                startIndex++;
            } else {
                break;
            }
        }
        res = res.substr(startIndex);
        return res == "" ? "0" : res;
    }
};
// @lc code=end

