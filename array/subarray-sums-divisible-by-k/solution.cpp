#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // TC - O(n)
    // SC - O(n)
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int, int> ump;
        int count = 0, sum = 0;

        ump[sum] = 1;
        for(int i = 0; i < nums.size(); i++) {
            sum = (sum + nums[i]) % k;
            if(sum < 0)
                sum += k;
            
            count += ump[sum];
            ump[sum]++;
        }

        return count;
    }
};