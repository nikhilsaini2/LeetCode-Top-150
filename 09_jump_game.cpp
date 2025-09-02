/*
📌 Problem: Jump Game (Medium)

Pattern: Greedy

Key Idea:
Track the farthest reachable index while traversing.

Steps:
1. Initialize reachable = 0.
2. For each index i:
   - If i > reachable → cannot reach → return false.
   - Update reachable = max(reachable, i + nums[i]).
3. If loop completes → return true.

Edge Cases:
- Single element array → always true.
- First element = 0 and size > 1 → false.

Time / Space: O(n) / O(1)
*/

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int reachable = 0;
        for(int i = 0; i < nums.size(); i++){
            if(reachable < i) return false;
            reachable = max(reachable, i + nums[i]);
        }
        return true;
    }
};
