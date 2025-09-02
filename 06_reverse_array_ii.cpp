/*
📌 Problem: Reverse Array II (Medium)

Pattern: Array Manipulation / Reversal

Key Idea:
Use custom reverse function and rotate in parts.

Steps:
1. Normalize k = k % n.
2. Reverse first (n-k) elements.
3. Reverse last k elements.
4. Reverse entire array.

Edge Cases:
- k = 0 or multiple of n → no change.
- Single element array.
- Large k > n.

Time / Space: O(n) / O(1)
*/

class Solution {
public:
    void reverse(vector<int>& arr, int left, int right){
        while(left < right){
            swap(arr[left++], arr[right--]);
        }
    }
    void rotate(vector<int>& nums, int k) {
        int size = nums.size();
        if(k >= size) k = k % size;
        reverse(nums, 0, size-k-1);
        reverse(nums, size-k, size-1);
        reverse(nums, 0, size-1);
    }
};
