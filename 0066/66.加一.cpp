/*
 * @lc app=leetcode.cn id=66 lang=cpp
 *
 * [66] 加一
 */
#include <vector>
using namespace std;
// @lc code=start
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        // result 
        // [1,9,0,0,0]
        //             i
        // [1,8,9,9,9],  0
        // [1,8,9,9,0],  1
        // [1,8,9,0,0],  2
        // [1,9,0,0,0],  3
        // [1,9,0,0,0],  4
        vector<int> result;
        for (auto it = digits.rbegin(); it != digits.rend();it++) {
            if (*it == 9) {
                *it = 0;
            }
            else {
                *it +=1;
                break;
            }
        }

        // pos process for [9,9,9,...] input
        if (digits[0] == 0) {
            vector<int> result(digits.size(),0);
            result.insert(result.begin(), 1);
            return result;
        }
        return digits;
    }
};
// @lc code=end

