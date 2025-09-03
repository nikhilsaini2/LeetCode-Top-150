/*
📌 Problem: Gas Station (Medium)

Pattern: Greedy

Key Idea:
Track cumulative tank balance; if it goes negative, reset start.

Steps:
1. Iterate through gas stations.
2. Maintain current sum and total balance.
3. Reset starting position when balance < 0.
4. Return start index if total balance >= 0, else -1.

Edge Cases:
- No valid start exists → return -1.
- Multiple valid stations → first valid returned.
- Single station scenario.

Time / Space: O(n) / O(1)
*/

class Solution { 
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int pos = 0, sum = 0, total = 0;
        for(int i=0; i<gas.size(); i++){
            sum += gas[i] - cost[i];
            if(sum < 0){
                total += sum;
                sum = 0;
                pos = i + 1;
            }
        }
        total += sum;
        return total >= 0 ? pos : -1;
    }
};
