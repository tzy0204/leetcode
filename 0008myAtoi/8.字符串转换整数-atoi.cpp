// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem8.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=8 lang=cpp
 *
 * [8] 字符串转换整数 (atoi)
 */

// @lc code=start
class Solution {
public:
    
    int myAtoi(string s) {
        int flag = 1; // used to determine the sign of the number
        int startIndex = -1; // used to determine the start index of the number
        int endIndex = -1; // used to determine the end index of the number
        // "    -42"
        //      ^ 
        
        startIndex = s.find_first_not_of(' ');
        if (startIndex == string::npos) return 0;
        else if (s[startIndex] == '-') {
            flag = -1;
            startIndex++;
        } else if (s[startIndex] == '+') {
            startIndex++;
        } else if (s[startIndex] < '0' || s[startIndex] > '9') {
            return 0;
        }

        // find the end index of the number
        endIndex = s.find_first_not_of("0123456789", startIndex);
        if (endIndex == string::npos) 
            endIndex = s.size() -1;
        else 
            endIndex--;

        // convert the string to integer
        long res = 0;
        for (int i = startIndex; i <= endIndex; i++) {
            int tempValue = s[i] - '0';

            if (flag == 1 && flag * (res * 10 + tempValue) > INT32_MAX) {
//            change expression to avoid overflow    
//            if (flag == 1 && flag * res > (INT32_MAX - tempValue) / 10) {    
                return INT32_MAX;
            }
            else if (flag == -1 && flag * (res * 10 + tempValue) < INT32_MIN) {
                return INT32_MIN;
            }
            else {
                res = 10*res + tempValue;
            }
        }
        return (int)flag * res;
    }
};
// @lc code=end

