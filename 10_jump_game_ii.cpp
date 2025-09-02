/*
📌 Problem: Jump Game II (Medium)

Pattern: Greedy (Level Traversal)

Key Idea:
Count jumps while expanding the farthest reachable boundary.

Steps:
1. Initialize jumps = 0, reachable = 0, currEnd = 0.
2. Traverse array:
   - Update reachable = max(reachable, i + nums[i]).
   - If i == currEnd → take a jump → update currEnd = reachable.
3. Stop early if currEnd >= n-1.

Edge Cases:
- Single element array → 0 jumps.
- First element = 0 and size > 1 → impossible.

Time / Space: O(n) / O(1)
*/

class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        if(n <= 1) return 0;
        int jumps = 0;
        int reachable = 0;
        int currEnd = 0;
        for(int i = 0; i < n; i++){
            reachable = max(reachable, i + nums[i]);
            if(i == currEnd){
                jumps++;
                currEnd = reachable;
                if(currEnd >= n-1) break;
            }
        }
        return jumps;
    }
};
