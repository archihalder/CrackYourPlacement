#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // TC - O(n)
    // SC - O(n)
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> ump;

        for(int i: nums) {
            ump[i]++;
        }

        for(auto it: ump) {
            if(it.second > nums.size() / 2)
                return it.first;
        }

        return 0;
    }

    // Optimal
    // TC - O(n)
    // SC - O(1)
    int majorityElement(vector<int>& nums) {
        int count = 0, candidate = 0;

        for(int i = 0; i < nums.size(); i++) {
            if(count == 0)
                candidate = nums[i];

            if(nums[i] == candidate) 
                count++;
            else
                count--;
        }

        return candidate;
    }
};