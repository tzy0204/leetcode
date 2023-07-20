// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem345.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=345 lang=cpp
 *
 * [345] 反转字符串中的元音字母
 */

// @lc code=start
#include <string>
#include <algorithm>
using namespace std;
class Solution {
public:
    string reverseVowels(string s) {
        // define a set of vowels
        string vowels = "aeiouAEIOU";
        // two pointers
        int left = 0;
        int right = s.size()-1;

        while (left < right) {
            // find the left vowel
            left = s.find_first_of(vowels, left);
            // find the right vowel
            right = s.find_last_of(vowels,right);
            // swap the vowels if left < right
            if (left < right) {
                swap(s[left], s[right]);
                left++;
                right--;
            }
        }
        return s;
    }
};
// @lc code=end

