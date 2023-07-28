// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem4.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=4 lang=cpp
 * @lcpr version=21912
 *
 * [4] 寻找两个正序数组的中位数
 */
#include <algorithm>
#include <vector>
using namespace std;
// @lc code=start
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        // handle special case
        if (nums1.empty() && nums2.empty()) return 0.0;

        // 合并的vector 不需要剔除重複的element,如下例子：
        // a = -1,0,0,0,2,2,2,3,3,3,4
        // b = -1,0,2,3,4
        // size a = 11, med a[11/2] = a[5] = 2
        // size b = 5, med b[5/2] = b[2] = 2
        // store to the set
        vector <int> v;
        for (auto&n:nums1) {            
            v.push_back(n);
        }
        for (auto&n:nums2) {
            v.push_back(n);
        }        
        sort(v.begin(), v.end());

        // Find the median and Return it
        int n=v.size();  // O(n)
        // [1,2,3,4]
        // size = 4
        // v[4/2 - 1] = v[1] 
        // v[4/2] = v[2]

        return n%2?v[n/2]:(v[n/2-1]+v[n/2])/2.0;
        
    }
};
// @lc code=end



/*
// @lcpr case=start
// [1,3]\n[2]\n
// @lcpr case=end

// @lcpr case=start
// [1,2]\n[3,4]\n
// @lcpr case=end

 */

