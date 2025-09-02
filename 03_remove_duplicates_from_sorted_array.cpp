/*
📌 Problem: Remove Duplicates from Sorted Array (Easy)

Pattern: Two Pointers

Key Idea:
Use a slow pointer to track the position of the last unique element, and a fast pointer to scan.

Steps:
1. If nums is empty → return 0.
2. Set `k = 1` (since first element always unique).
3. For i = 1 → n-1:
      - If nums[i] != nums[k-1] → place nums[i] at nums[k], increment k.
4. Return k.

Edge Cases:
- All elements same.
- Already unique array.
- Single element.

Time / Space: O(n) / O(1)
*/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;
        int k = 1;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[k-1]) {
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};