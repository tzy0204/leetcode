/*
 * @lc app=leetcode.cn id=350 lang=cpp
 *
 * [350] 两个数组的交集 II
 */
#include <vector>
using namespace std;

// @lc code=start
class Solution {
public:
    static bool myCompare(int x, int y) {
        return x < y ? true:false;
    }
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int len1 = nums1.size();
        int len2 = nums2.size();
        int begin, end;
        vector <int>result;
        if (len1 == 0 || len2 == 0) {
            return {};
        }
        // sort array
        sort(nums1.begin(),nums1.end(),myCompare);
        sort(nums2.begin(),nums2.end(),myCompare);

        auto it1=nums1.begin();
        auto it2=nums2.begin();
        while (it1 != nums1.end() && it2 != nums2.end()){
            if (*(it1) == *(it2)) {
                result.push_back(*it1);
                it1++;
                it2++;
            }
            else if (*it1 < *it2) {
                it1++;
            }
            else {
                it2++;
            }
        }
                
        return result;

    }
};
// @lc code=end

