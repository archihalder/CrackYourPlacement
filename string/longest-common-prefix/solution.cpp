#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // TC - O(n log n)
    // SC - O(n)
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        int n = strs.size();
        int len = min(strs[0].length(), strs[n-1].length());

        string res;
        for(int i = 0; i < len; i++) {
            if(strs[0][i] == strs[n-1][i])
                res += strs[0][i];
            else
                break;
        }

        return res;
    }
};