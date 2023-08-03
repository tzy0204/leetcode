// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem434.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=434 lang=cpp
 *
 * [434] 字符串中的单词数
 */

// @lc code=start
#include <string>
using namespace std;
class Solution {
public:
    int countSegments(string s) {
        //handle conner case
        if (s.length() == 0) return 0;
        if (s.length() == 1) {
            if (s[0] == ' ') return 0;
            return 1;
        }
        int res = 0;
        //res   "Of all the gin joints in all the towns in all the world,   "
        int i = 0;
        int j = 0;
        while (i < s.length()) {
            if (s[i] != ' ') {
                while (j < s.length() && s[j] != ' ') {
                    j++;
                }
                res++;
            }
            // j is at next space
            i = j+1;
            j = i;            
        }
        return res;
    }
};
// @lc code=end

