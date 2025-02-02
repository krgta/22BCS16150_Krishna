#include<iostream>
#include<unordered_map>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> mp;
        int left = 0, maxLen = 0;

        for (int right = 0; right < s.size(); right++) {
            mp[s[right]]++;

            while (mp[s[right]] > 1) {
                mp[s[left]]--;
                left++;
            }

            maxLen = max(maxLen, right - left + 1);
        }

        return maxLen;
    }
};