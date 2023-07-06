// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem14.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=14 lang=cpp
 * @lcpr version=21909
 *
 * [14] 最长公共前缀
 */
#include <string>
#include <vector>
using namespace std;
// @lc code=start
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int minLen = 200;
        string str = {};
        // find minLen
        for (int i = 0; i < strs.size(); i++) {
          if (minLen > strs[i].length()) {
            minLen = strs[i].length();
            str = strs[i];            
          }
        }
        // handle special case
        if (minLen == 0)
            return str;
        // find longest prifix
        // ["flower","flow","flight"]
        //   ^        ^      ^
        //   ^^       ^^     ^^
        //   ^^^      ^^^    ^^^
        // minLen = 4
        // strs.size() = 3
        // str = "flow"
        // i    j    str.substr(0,i)  strs[i].substr(0,i)
        // 1    0    "f"               "f"
        // 1    1    "f"               "f"
        // 1    2    "f"               "f"
        // 2    0    "fl"              "fl"
        // 2    1    "fl"              "fl"
        // 2    2    "fl"              "fl"
        // 3    0    "flo"             "flo"
        // 3    1    "flo"             "flo"
        // 3    2    "flo"             "fli" 
        for (int i = 1; i <= minLen; i++) {
          for (int j = 0; j < strs.size(); j++) {
            if (str.substr(0,i) != strs[j].substr(0,i))
              return str.substr(0,i-1);
          }           
        }
        return str;
    }
};
// @lc code=end



/*
// @lcpr case=start
// ["flower","flow","flight"]\n
// @lcpr case=end

// @lcpr case=start
// ["dog","racecar","car"]\n
// @lcpr case=end

 */

