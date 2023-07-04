// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem28.h"

// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=28 lang=cpp
 * @lcpr version=21909
 *
 * [28] 找出字符串中第一个匹配项的下标
 */
#include <string>

// @lc code=start
class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.size() > haystack.size() ) 
            return -1;
        // if the same size, compare directly
        else if (needle.size() == haystack.size() ) 
            return needle == haystack ? 0 : -1;
        // if needle is empty, return 0
        else if (needle.size() == 0) 
            return 0;
        // if haystack is empty, return -1
        else if (haystack.size() == 0) 
            return -1;
        // if both are empty, return 0
        else if (haystack.size() == 0 && needle.size() == 0) 
            return 0;
        // handle normal case : haystack.size() > needle.size()
        else {
            for (int i = 0; i <= haystack.size() - needle.size();i++) {
                bool isMatch = true;
                for (int j = 0; j < needle.size();j++) {
                    if (haystack[i + j] != needle[j]) {
                        isMatch = false;
                        break;
                    }
                }
                if (isMatch)
                    return i;
            }
            return -1;
        }

    }
};
// @lc code=end



/*
// @lcpr case=start
// "sadbutsad"\n"sad"\n
// @lcpr case=end

// @lcpr case=start
// "leetcode"\n"leeto"\n
// @lcpr case=end

 */

