// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem278.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=278 lang=cpp
 *
 * [278] 第一个错误的版本
 */

// @lc code=start
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    void checkBadVersion(long start, long end, long long &firstBad) {
        // end condition
        if (start > end) return;
        long med = (start + end) / 2;
        
        if (isBadVersion(med) == true) {
            // bad versino is between start and med
            // update first Bad version
            if (med < firstBad) firstBad = med;
            checkBadVersion(start, med-1, firstBad);
        }
        else {
            // bed version is between med + 1 and end
            checkBadVersion(med+1, end, firstBad);
        }
    }
    int firstBadVersion(int n) {
        // handle conner case
        if (n == 1) return n;
        long long firstBad = INT64_MAX;
        checkBadVersion(0, n, firstBad);
        return (int)firstBad;
    }
};
// @lc code=end

