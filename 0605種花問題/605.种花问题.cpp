// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem605.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=605 lang=cpp
 *
 * [605] 种花问题
 */

// @lc code=start
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        // insert '0' at begain and end for handling head and tail issue
        flowerbed.insert(flowerbed.begin(),0);
        flowerbed.push_back(0);

        // original : [1,0,1]
        // modified : [0,1,0,1,0]

        for (int i =1; i <= flowerbed.size() -2;i++) {
            if (flowerbed[i] == 0 &&
                flowerbed[i - 1] == 0 &&
                flowerbed[i + 1] == 0) {
                    flowerbed[i] = 1;
                    n--;
                }
        }
        return n <= 0;
    }
};
// @lc code=end

