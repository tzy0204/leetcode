/*
 * @lc app=leetcode.cn id=463 lang=cpp
 *
 * [463] 岛屿的周长
 */

// @lc code=start
class Solution {
    // 相鄰邊數
    int adjacentCount(vector<vector<int>>& grid, int x, int y) {
        int count = 0;
        if (x > 0 && grid[x-1][y] == 1) count++;
        if (x < grid.size()-1 && grid[x+1][y] == 1) count++;
        if (y > 0 && grid[x][y-1] == 1) count++;
        if (y < grid[0].size()-1 && grid[x][y+1] == 1) count++;
        return count;
    }
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int perimeter = 0;
        for (int x=0; x<grid.size(); x++) {
            for (int y=0; y<grid[0].size(); y++) {
                if (grid[x][y] == 1) {
                    perimeter += 4 - adjacentCount(grid, x, y);
                }
            }
        }
        return perimeter;
    }
};
// @lc code=end

