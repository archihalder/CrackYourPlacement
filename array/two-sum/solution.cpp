#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Optimal
    // TC - O(n)
    // SC - O(n)
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> ump;
        int x = 0;

        for(int i = 0; i < nums.size(); i++) {
            x = target - nums[i];

            if(ump.find(x) != ump.end()) {
                return {i, ump[x]};
            } else {
                ump[nums[i]] = i;
            }
        }

        return {};
    }
};