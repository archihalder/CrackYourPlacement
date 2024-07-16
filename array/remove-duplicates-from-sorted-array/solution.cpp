#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // TC - O(n)
    // SC - O(1)
    int removeDuplicates(vector<int>& nums) {
        int i = 0, j = 0;

        while(j < nums.size()) {
            if(nums[j] != nums[i]) {
                nums[i+1] = nums[j];
                i++;
            }
            j++;
        }

        return i+1; // 1-based index
    }
};