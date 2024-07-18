#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // TC - O(n)
    // SC - O(n)
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> prefixSumCount;
        int count = 0, sum = 0;

        prefixSumCount[0] = 1;
        for(int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            int rem = sum - k;
            count += prefixSumCount[rem];
            prefixSumCount[sum]++;
        }

        return count;
    }
};