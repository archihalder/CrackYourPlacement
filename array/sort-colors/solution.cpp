#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Optimal - less number of operations
    // TC - O(n)
    // SC - O(1)
    void sortColors1(vector<int>& nums) {
        int zeroIdx = 0, oneIdx = 0, twoIdx = nums.size() - 1;

        while(oneIdx <= twoIdx) {
            if(nums[oneIdx] == 0) {
                swap(nums[oneIdx], nums[zeroIdx]);
                zeroIdx++;
                oneIdx++;
            } else if(nums[oneIdx] == 2) {
                swap(nums[oneIdx], nums[twoIdx]);
                twoIdx--;
            } else {
                oneIdx++;
            }
        }
    }

    // Better 
    // TC - O(n)
    // SC - O(1)
    void sortColors2(vector<int>& nums) {
        int zeroCount = 0, oneCount = 0, twoCount = 0;
        for(int num: nums) {
            if(num == 0) zeroCount++;
            else if(num == 1) oneCount++;
            else twoCount++;
        }

        int i = 0;
        while(zeroCount--) {
            nums[i] = 0;
            i++;
        }

        while(oneCount--) {
            nums[i] = 1;
            i++;
        }

        while(twoCount--) {
            nums[i] = 2;
            i++;
        }
    }
};