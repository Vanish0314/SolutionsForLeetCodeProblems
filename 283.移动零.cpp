/*
 * @Author: Vanish
 * @Date: 2024-10-22 19:47:16
 * @LastEditTime: 2024-10-22 19:47:28
 * Also View: http://vanishing.cc
 * Contract Me: http://qunchengxiao.me
 * Copyright@ http://www.wtfpl.net/
 */
/*
 * @lc app=leetcode.cn id=283 lang=cpp
 *
 * [283] 移动零
 */

// @lc code=start

#include <vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int slow = 0, fast = 0;

        while(fast < nums.size())
        {
            if(nums[fast]!= 0)
            {
                nums[slow] = nums[fast];
                slow++;
            }
            fast++;
        }
        while(slow < nums.size())
        {
            nums[slow] = 0;
            slow++;
        }
    }
};
// @lc code=end

