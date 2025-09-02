/*
📌 Problem: Merge Sorted Array (Easy)

Pattern: Two Pointers

Key Idea:
Start from the end of both arrays, fill nums1 from the back to avoid overwriting.

Steps:
1. Set p1 = m-1 (end of nums1 valid part), p2 = n-1 (end of nums2), p = m+n-1 (end of nums1).
2. While p1 >= 0 && p2 >= 0:
      - If nums1[p1] > nums2[p2] → place nums1[p1] at nums1[p], move p1--.
      - Else → place nums2[p2] at nums1[p], move p2--.
      - Decrement p--.
3. If leftovers in nums2 → copy them into nums1.

Edge Cases:
- nums2 empty
- nums1 empty (initially all 0s)
- All elements same

Time / Space: O(m+n) / O(1)
*/

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int p1 = m - 1, p2 = n - 1, p = m + n - 1;
        while (p1 >= 0 && p2 >= 0) {
            if (nums1[p1] > nums2[p2]) {
                nums1[p] = nums1[p1];
                p1--;
            } else {
                nums1[p] = nums2[p2];
                p2--;
            }
            p--;
        }
        while (p2 >= 0) {
            nums1[p] = nums2[p2];
            p2--; 
            p--;
        }
    }
};