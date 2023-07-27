/*
 * @lc app=leetcode.cn id=26 lang=cpp
 * @lcpr version=21912
 *
 * [26] 删除有序数组中的重复项
 */

// @lc code=start
#include <set>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //put the nums into set
        set<int> s;
        for (int i = 0; i < nums.size(); i++)
        {
            s.insert(nums[i]);
        
        }

        //push the set into nums
        nums.clear();
        for (auto& it : s)
        {
            nums.push_back(it);
        }
        // return nums.size();
        return s.size();        
    }
};
// @lc code=end



/*
// @lcpr case=start
// [1,1,2]\n
// @lcpr case=end

// @lcpr case=start
// [0,0,1,1,1,2,2,3,3,4]\n
// @lcpr case=end

 */

