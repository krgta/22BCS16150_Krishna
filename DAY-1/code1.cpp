#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        int j = 1;
        int count = 0;
        while(i < j && j != nums.size()) {
            if(nums[i] == nums[j]) {
                j++;
            }
            else {
                i += 1;
                swap(nums[i], nums[j]);
                j++;
                count += 1;
            }
        }
        return count + 1;
    }
};