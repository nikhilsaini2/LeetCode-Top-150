/*
📌 Problem: Remove Element (Easy)

Pattern: Two Pointers

Key Idea:
Use two pointers: one iterates over array, another builds the new array in-place by skipping `val`.

Steps:
1. Initialize `k = 0` (next position to insert).
2. Iterate `i` from 0 → n-1:
      - If nums[i] != val → place nums[i] at nums[k], increment k.
3. Return k (new length).

Edge Cases:
- All elements equal to val.
- No element equal to val.
- Single element array.

Time / Space: O(n) / O(1)
*/

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};