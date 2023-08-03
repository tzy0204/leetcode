// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem349.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=349 lang=cpp
 *
 * [349] 两个数组的交集
 */

// @lc code=start
#include <unordered_map>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        // handle one element case
        if (nums1.size() == 1 && nums2.size() == 1) {
            res.push_back(nums1[0]);
            return res;
        }
        unordered_map<int, int> map;
        for (auto &n: nums1) {
            // only update once
            if (map[n] == 0) map[n]++;
        }
        // check intersection
        for (int i = 0;i < nums2.size();i++) {
            if (map[nums2[i]] != 0) {
                bool exist = false;
                for (int j = 0; j < res.size();j++) {
                    if (res[j] == nums2[i]) {
                        exist = true;
                        break;
                    }
                }
                if (!exist) res.push_back(nums2[i]);
                }
        }
        return res;
    }
};
// @lc code=end

