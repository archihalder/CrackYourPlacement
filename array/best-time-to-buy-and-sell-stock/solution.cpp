#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // TC - O(n)
    // SC - O(1)
    int maxProfit(vector<int>& prices) {
        int buy = prices[0];
        int bestProfit = 0, profit = 0;

        for(int i = 1; i < prices.size(); i++) {
            profit = prices[i] - buy;
            if(profit < 0)
                buy = prices[i];
            bestProfit = max(bestProfit, profit);
        }

        return bestProfit;
    }
};