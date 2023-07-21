/*
 * @lc app=leetcode.cn id=506 lang=cpp
 *
 * [506] 相对名次
 */

// @lc code=start
class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        //store to map
        map<int, int> map;
        for (int i = 0; i < score.size(); i++) {
            map[score[i]] = i;
        }
        //sort
        vector<string> result(score.size());
        int count = 1;
        for (auto it = map.rbegin(); it != map.rend(); it++) {
            if (count == 1) {
                result[it->second] = "Gold Medal";
            }
            else if (count == 2) {
                result[it->second] = "Silver Medal";
            }
            else if (count == 3) {
                result[it->second] = "Bronze Medal";
            }
            else {
                result[it->second] = to_string(count);
            }
            count++;
        }
        return result;
    }
};
// @lc code=end

