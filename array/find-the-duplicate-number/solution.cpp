#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // TC - O(n)
    // SC - O(n)
    int findDuplicate_hashmap(vector<int>& nums) {
        unordered_map<int, int> ump;
        for(int num: nums) {
            ump[num]++;
        }

        for(auto i: ump) {
            if(i.second > 1)
                return i.first;
        }

        return 0;
    }

    // TC - O(n)
    // SC - O(1)
    int findDuplicate_fast_and_slow(vector<int>& nums) {
        int fast = 0, slow = 0;

        do {
            fast = nums[nums[fast]];
            slow = nums[slow];
        } while(fast != slow);

        int entry = 0;
        while(entry != slow) {
            entry = nums[entry];
            slow = nums[slow];
        }

        return entry;
    }
};