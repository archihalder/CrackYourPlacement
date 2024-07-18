#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // TC - O(n)
    // SC - O(1)
    int maxArea(vector<int>& height) {
        int left = 0, right = height.size() - 1;
        int minHeight = 0, volume = 0, maxVolume = 0;

        while(left < right) {
            minHeight = min(height[left], height[right]);
            volume = minHeight * (right - left);
            maxVolume = max(maxVolume, volume);
            
            if(height[left] < height[right]) 
                left++;
            else 
                right--;
        }

        return maxVolume;
    }
};