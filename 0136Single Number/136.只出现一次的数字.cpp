// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem136.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=136 lang=cpp
 *
 * [136] 只出现一次的数字
 */

// @lc code=start
#include <iostream>
#include <map>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result;
        if(nums.size() == 1 || nums.size() == 2){
            return nums[0];
        }
        std::map<int, int> imap;
        // store to map
        for (int i=0; i< nums.size(); i++){
            imap[nums[i]] += 1;
        }

        for (auto it = imap.begin(); it !=imap.end();it++){
            //cout << (*it).first << (*it).second << endl;
            if ((*it).second == 1) {
                result =  (*it).first;
                break;
            }
        }        
        return result;
    }
};
// @lc code=end
