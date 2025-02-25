#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int max_reach = n - 1;
        for(int i = nums.size() - 1; i >= 0; i--) {
            if(i + nums[i] >= max_reach) {
                max_reach = i;
            }
        }
        return max_reach == 0;
    }
};