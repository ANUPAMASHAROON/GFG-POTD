#include <bits/stdc++.h>
class Solution {
  public:
    string reverseString(string& s) {
        // code here
        string rev;
        for(int i=s.size()-1;i>=0;i--){
            rev.push_back(s[i]);
        }
        return rev;
    }
};