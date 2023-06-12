// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem9.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=9 lang=cpp
 *
 * [9] 回文数
 */

// @lc code=start
#include <vector>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        vector<int> vec;
        int medPos = -1;
        if (x < 0) {
            return false;
        }
        if (x == 0) {
            return true;
        }
        while (x !=0) {
            vec.push_back(x % 10);
            x = x/10;
        }

        medPos = vec.size() / 2;
        if (vec.size() % 2 == 0) { //even
            // [1][2][2][1]
            //        ^
            //        medPos
            // [1] [1]
            // [2] [2]
            // ..
            // [medPos-i] [medPos +i]

            for (int i = 0; i < (vec.size() / 2); i++){
                if (vec[i] != vec[vec.size() -1 - i]) {
                    return false;
                }
            }
        }
        else { // odd
            // [medPos-1] [medPos +1]
            // [medPos-2] [medPos +2]
            // ..
            // [medPos-i] [medPos +i]
            for (int i = 1; i <= (vec.size() / 2); i++){
                if (vec[medPos + i] != vec[medPos - i]) {
                    return false;
                }
            }
        }
        return true;
    }
};
// @lc code=end

