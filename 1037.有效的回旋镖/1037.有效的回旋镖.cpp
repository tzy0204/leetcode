/*
 * @lc app=leetcode.cn id=1037 lang=cpp
 *
 * [1037] 有效的回旋镖
 */

// @lc code=start
#include <vector>
using namespace std;
class Solution {
public:
    bool isBoomerang(vector<vector<int>>& points) {
        // 三點共線，斜率相同
        // (y2-y1)/(x2-x1) == (y3-y2)/(x3-x2)
        // (y2-y1)*(x3-x2) == (y3-y2)*(x2-x1)
        if ((points[1][1]-points[0][1])*(points[2][0]-points[1][0]) 
        == (points[2][1]-points[1][1])*(points[1][0]-points[0][0])) return false;
        return true;        
    }
};
// @lc code=end

