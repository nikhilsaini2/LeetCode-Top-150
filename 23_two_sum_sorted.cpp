/*
📌 Problem: Two Sum II - Input Array Is Sorted (Medium)

Pattern: Two Pointers

Key Idea:
Use sorted property → move left/right based on sum until target is found.

Steps:
1. left = 0, right = n-1.
2. While left < right:
   - sum = arr[left] + arr[right].
   - If sum == target → return indices+1.
   - If sum > target → move right--.
   - Else → move left++.
3. Return {} if not found.

Edge Cases:
- Exactly one valid pair (guaranteed by problem).
- Negative numbers allowed.

Time / Space: O(n) / O(1)
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int left = 0, right = arr.size()-1;
        while (left < right) {
            int sum = arr[left] + arr[right];
            if (sum == target) return {left+1, right+1};
            else if (sum > target) right--;
            else left++;
        }
        return {};
    }
};
