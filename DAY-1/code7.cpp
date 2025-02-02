#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
        int j = 0;
        for (int i = 0; i < s.size(); i++) {
            if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >='a' && s[i] <= 'z' || s[i] >= '0' && s[i] <= '9')){ 
                s[j] = s[i];
                j++;
            }
        }
        s.resize(j);
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        string reversed(s.rbegin(), s.rend());
        if(s == reversed) {
            return true;
        }
        return false;
    }
};