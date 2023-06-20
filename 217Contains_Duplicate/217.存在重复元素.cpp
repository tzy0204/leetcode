// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem217.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=217 lang=cpp
 *
 * [217] 存在重复元素
 */
#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
using namespace std;
// @lc code=start
class Solution {
public:    
    bool containsDuplicate(vector<int>& nums) {
        bool result = false;
        unordered_map<int,int>imap;        
        for (int i= 0; i < nums.size();i++){
            imap[nums[i]] +=1;
        }
        for (auto i = imap.begin(); i != imap.end(); i++) {
            if ((*i).second > 1) {
                result = true;
                break;
            }
        }
        return result;
    }
};
// @lc code=end

