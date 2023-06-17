/*
 * @lc app=leetcode.cn id=189 lang=cpp
 *
 * [189] 轮转数组
 */
using namespace std;
// @lc code=start
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        // Original    : [1,2,3,4,5,6,7]
        // 向右轮转 1 步: [7,1,2,3,4,5,6]
        // 向右轮转 2 步: [6,7,1,2,3,4,5]
        // 向右轮转 3 步: [5,6,7,1,2,3,4]
        //         4     [4,5,6,7,1,2,3]  
        //         5     [3,4,5,6,7,1,2]          
        //         6     [2,3,4,5,6,7,1]                  
        //         7     [1,2,3,4,5,6,7]                  
        //         8     [7,1,2,3,4,5,6] step8 = step1                         
        int length = nums.size();
        int step = k % length;
        for (int i=0; i < step;i++){
            int tempValue = nums[length-1];
            nums.pop_back();
            nums.insert(nums.begin(), tempValue);
        }
        
    }
};
// @lc code=end

