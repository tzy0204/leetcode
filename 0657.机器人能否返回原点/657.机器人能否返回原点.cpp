/*
 * @lc app=leetcode.cn id=657 lang=cpp
 *
 * [657] 机器人能否返回原点
 */

// @lc code=start
class Solution {
public:
    bool judgeCircle(string moves) {
        int x=0;
        int y=0;
        for (auto& it : moves) {
            if (it == 'L') {
                x--;
                continue;
            }
            if (it == 'R') {
                x++;
                continue;   
            }
            if (it == 'U') {
                y++;
                continue;                
            }
            if (it == 'D') {
                y--;
                continue;
            }
        }
        return (x == 0 && y == 0);
    }
};
// @lc code=end

