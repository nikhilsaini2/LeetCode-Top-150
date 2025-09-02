/*
📌 Problem: Rotate Array (Medium)

Pattern: Array Reversal

Key Idea:
Reverse parts of the array to rotate efficiently.

Steps:
1. Normalize k = k % n.
2. Reverse entire array.
3. Reverse first k elements.
4. Reverse remaining n-k elements.

Edge Cases:
- k = 0 or multiple of n → no change.
- Single element array.
- Large k > n.

Time / Space: O(n) / O(1)
*/

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k %= n;
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
    }
};