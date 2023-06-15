// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem228.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=228 lang=cpp
 *
 * [228] 汇总区间
 */

// @lc code=start

class Solution {
public:
    std::vector<std::string> summaryRanges(std::vector<int>& nums) {
        vector <string> result = {};
        // return empty if size is 0
        if (nums.size() == 0) {
            return result;
        }

        int startValue = nums[0];

        // compare [i] & [i-1]
        // if [i] != [i-1] => startValue != [i-1] => " startValue -> [i-1]"; startValue = num[i]
        // if [i] != [i-1] => startValue == [i-1] => "startValue"; startValue = num[i]
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != (nums[i -1] + 1)) {
                string tempStr = "";
                if (startValue != nums[i - 1]) {
                    tempStr = to_string(startValue) + "->" + to_string(nums[i-1]);                    
                }
                else {
                    tempStr = to_string(startValue);                    
                }
                result.push_back(tempStr);
                startValue = nums[i];
            }
        }

        // for handling last one element
        if (startValue == nums.back()) {
            // startValue is updated to last element, it means last one element is not inclusive wit previous element
            // just add it to result 
            result.push_back(to_string(startValue));
        }
        else {
            string tempStr = "";
            tempStr = to_string(startValue) + "->" + to_string(nums.back());                                    
            result.push_back(tempStr);
        }
        return result;
    }
};
// @lc code=end

