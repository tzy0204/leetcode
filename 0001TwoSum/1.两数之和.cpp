// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem1.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */
#include <vector>
using namespace std;
// @lc code=start
#include <algorithm>
#include <unordered_map>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> value = {};
        // for (int i = 0; i<nums.size();i++){
        //     for (int j = i+1; j<nums.size();j++){
        //         if (nums[i] + nums[j] == target) {
        //             value.push_back(i);
        //             value.push_back(j);
        //             return value;
        //         }
        //     }
        // }

        unordered_map<int,int> umap;
        // <key: nums's value, value = nums's index>
        for (int i = 0; i < nums.size();i++){
            umap[nums[i]] = i;
        }
        int i = 0;
        int y;
        int x = nums[0];
        value.push_back(i);        

        for (int j = 1; j < nums.size();j++) {
//            if (umap.count(target - x) > 0 && value[0] != umap[target - x]) {
            if (umap.find(target - x) != umap.end() && value[0] != umap[target - x]) {    
                value.push_back(umap[target - x]);                                
                return value;                
            }
            else {
                // not match, try next
                x = nums[j];
                value[0] = j;                
            }
            
        }
        return value;
    }
};
// @lc code=end

 