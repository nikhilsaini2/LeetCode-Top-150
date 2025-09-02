/*
📌 Problem: Best Time to Buy and Sell Stock (Easy)

Pattern: Greedy

Key Idea:
Track the minimum price so far and maximize profit by selling later.

Steps:
1. Initialize small = prices[0], Max = 0.
2. Traverse prices:
   - Update small if new price is smaller.
   - Update Max if profit (price - small) is larger.
3. Return Max.

Edge Cases:
- Monotonically decreasing prices → profit = 0.
- Single day prices.

Time / Space: O(n) / O(1)
*/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int Max = 0;
        int small = prices[0];
        for(int i = 1; i < prices.size(); i++){
            if(prices[i] < small) small = prices[i];
            if(prices[i] > small) Max = max(Max, prices[i] - small);
        }
        return Max;
    }
};
