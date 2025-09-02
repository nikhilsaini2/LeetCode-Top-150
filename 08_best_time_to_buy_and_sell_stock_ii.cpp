/*
📌 Problem: Best Time to Buy and Sell Stock II (Medium)

Pattern: Greedy

Key Idea:
Accumulate every increasing pair as profit.

Steps:
1. Traverse array.
2. If price[i] > price[i-1], add (price[i] - price[i-1]) to profit.
3. Return profit.

Edge Cases:
- Prices always decreasing → profit = 0.
- Single day prices.

Time / Space: O(n) / O(1)
*/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        for(int i = 1; i < prices.size(); i++){
            if(prices[i] > prices[i-1]) profit += (prices[i] - prices[i-1]);
        }
        return profit;
    }
};
