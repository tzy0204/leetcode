/*
 * @lc app=leetcode.cn id=7 lang=cpp
 *
 * [7] 整数反转
 */

// @lc code=start
class Solution {
public:
    int reverse(int x) {
        int flag = 0;
        long tempX = x;
        int maxIntLen = size(to_string(INT32_MAX));
        // store this value is positive or negative and force to positive value
        if (tempX > 0) {
            flag = 1;            
        }
        else {
            flag = -1;
            tempX *= -1;
        }
        // {'1','2','3'}
        string sv = to_string(tempX);
        cout <<flag << ","<< sv <<','<< sv.size()<< endl;
        int result = 0;
        for (int i = 0; i < sv.size();i++) {
            long tempValue =  ((int)sv[i] - '0') * pow(10, i);
            cout << i << ","<< tempValue << endl;
            if (flag == 1 && (result + tempValue) > INT32_MAX ||
                flag == -1 && (result + tempValue)*flag < INT32_MIN) {
                return 0;
            }
            else {
                result += tempValue;
                cout << result << endl;
            }
        }

        return result*flag;
        
    }
};
// @lc code=end

