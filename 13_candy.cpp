/*
📌 Problem: Candy (Hard)

Pattern: Greedy + Two-Pass

Key Idea:
Give candies based on increasing ratings, then adjust from right.

Steps:
1. Initialize all with 1 candy.
2. Left-to-right: increase if rating > left neighbor.
3. Right-to-left: increase if rating > right neighbor.
4. Sum all candies.

Edge Cases:
- Single child.
- All ratings equal.
- Strictly increasing / decreasing ratings.

Time / Space: O(n) / O(n)
*/

class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        vector<int> candies(n, 1);

        for(int i = 1; i < n; i++) {
            if(ratings[i] > ratings[i-1]) {
                candies[i] = candies[i-1] + 1;
            }
        }

        int total = candies[n-1];
        for(int i = n-2; i >= 0; i--) {
            if(ratings[i] > ratings[i+1]) {
                candies[i] = max(candies[i], candies[i+1] + 1);
            }
            total += candies[i];
        }
        return total;
    }
};
