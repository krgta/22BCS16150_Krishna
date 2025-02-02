#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int max = nums.size() - 1;
        for (int i = nums.size() - 1; i >= 0; i--) {
            if (i + nums[i] >= max) {
                max = i;
            }
        }
        return max == 0;
    }
};