// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem482.h"

using namespace std;
// @before-stub-for-debug-end

#include <string>
using namespace std;
/*
 * @lc app=leetcode.cn id=482 lang=cpp
 *
 * [482] 密钥格式化
 */

// @lc code=start
class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
            string header;
            string newS;
            int pos;
            // find the header
            pos = s.find('-');
            if (pos == -1) {
                return s;
            }
            header = s.substr(0, pos); // header + '-'
            // 123-abc
//                ^ pos = 3 ; length() = 7
            // remove header and '-'
            s = s.substr(pos +1, (s.length() - pos - 1) );
            // store and convert
            for (int i = 0; i < s.length();i++)            {
                if (s[i] != '-') {
                    if (s[i] >= 'A' && s[i] <= 'Z')
                        newS += s[i] + 32;
                    else if (s[i] >= 'a' && s[i] <= 'z')
                        newS += s[i] - 32;              
                    else
                        newS += s[i];
               }
            }
            pos = 0;
            int i = 0;
            while (newS.length() != 0) {
                if (newS.length() >= k) {
                    header += '-' + newS.substr(0, k);
                    newS = newS.substr(k, newS.length());
                }
                else {
                    header += newS;
                    break;
                }
            }
        return header;
    }
};
// @lc code=end

