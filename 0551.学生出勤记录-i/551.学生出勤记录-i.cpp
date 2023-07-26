/*
 * @lc app=leetcode.cn id=551 lang=cpp
 *
 * [551] 学生出勤记录 I
 */

// @lc code=start
class Solution {
public:
    bool checkRecord(string s) {
        // handle special case
        if (s.size() == 1) {
           return true;
        }
        int absentCount = 0;
        int lateCount = 0;

        for (int i : s) {
            if (i == 'A') {
                absentCount++;
                lateCount = 0;                
            }
            else if (i == 'L') {
                lateCount++;
            }
            else { // i == 'P'
                lateCount = 0;
            }
            if (absentCount >= 2 || lateCount >= 3) {
                return false;
            }
        }
        return true;
    }
};
// @lc code=end

