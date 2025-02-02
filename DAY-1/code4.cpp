#include<iostream>
#include<vector>
#include<map>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<long long, int> targetMap;
        vector<int> result;
        int n = nums.size();
        for(int i = 0; i < n; i++) {
            long long sum = target - nums[i];
            if(targetMap.find(sum) != targetMap.end()) {
                result.push_back(i);
                result.push_back(targetMap[sum]);
                break;
            }
            if(targetMap.find(sum) == targetMap.end()) {
                targetMap[nums[i]] = i;
            }
        }
        return result;
    }
};