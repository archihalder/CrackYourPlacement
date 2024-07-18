#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // TC - O(n)
    // SC - O(1)
    int maxProfit(vector<int>& prices) {
        int buy = prices[0];
        int profit = 0;

        for(int i = 1; i < prices.size(); i++) {
            if(prices[i] < prices[i-1]) {
                profit += prices[i-1] - buy;
                buy = prices[i];
            }
        }

        profit += prices[prices.size() - 1] - buy;

        return profit;
    }
};