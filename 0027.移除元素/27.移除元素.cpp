// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem27.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=27 lang=cpp
 * @lcpr version=21912
 *
 * [27] 移除元素
 */
#include <vector>
// @lc code=start
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // handle conner case
        if (nums.empty()) return 0;
        if (nums.size() == 1) {
            if (nums[0] == val) return 0;
            else return 1;
        }
        // using two pointers
        int j = 0;
        //nums = [3,2,2,3], val = 3
        //  i   j   nums[i]    nums[]
        //=============================
        //  0   0   3
        //  1   1   2           [2]
        //  2   2   2           [2,2]
        //  3       3
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != val) {
                nums[j] = nums[i];
                j++;
            }
        }
        //return nums[nums.size() - 1] == val ? j :j-1;
        return j;
    }
};
// @lc code=end



/*
// @lcpr case=start
// [3,2,2,3]\n3\n
// @lcpr case=end

// @lcpr case=start
// [0,1,2,2,3,0,4,2]\n2\n
// @lcpr case=end

 */

