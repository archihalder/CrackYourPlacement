#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // TC - O(n)
    // SC - O(n); using stack
    bool isValid(string s)
    {
        map<char, char> mp = {
            {'(', ')'},
            {'{', '}'},
            {'[', ']'}
        };

        stack<char> st;
        for (char c : s)
        {
            if (mp.count(c)) {
                st.push(c);
            } else {
                if (!st.empty() && mp[st.top()] == c) {
                    st.pop();
                } else {
                    return false;
                }
            }
        }

        return st.empty();
    }
};