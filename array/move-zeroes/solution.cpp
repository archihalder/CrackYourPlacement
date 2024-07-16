#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Optimal
    // TC - O(n)
    // SC - O(1)
    void moveZeroes(vector<int>& nums) {
        int zeroCount = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == 0)
                zeroCount++;
            else if(zeroCount != 0) {
                nums[i - zeroCount] = nums[i];
                nums[i] = 0;
            }
        }
    }
};