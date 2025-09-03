/*
📌 Problem: Trapping Rain Water (Hard)

Pattern: Two Pointers

Key Idea:
Use leftMax and rightMax to calculate trapped water.

Steps:
1. Initialize left, right, leftMax, rightMax.
2. Move smaller side inward.
3. Update water based on difference with max height.
4. Accumulate trapped water.

Edge Cases:
- Empty array.
- Strictly increasing/decreasing heights.
- All bars same height.

Time / Space: O(n) / O(1)
*/

class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if (n == 0) return 0;

        int left = 0, right = n - 1;
        int leftMax = 0, rightMax = 0;
        int water = 0;

        while (left < right) {
            if (height[left] < height[right]) {
                if (height[left] >= leftMax) {
                    leftMax = height[left];
                } else {
                    water += leftMax - height[left];
                }
                left++;
            } else {
                if (height[right] >= rightMax) {
                    rightMax = height[right];
                } else {
                    water += rightMax - height[right];
                }
                right--;
            }
        }
        return water;
    }
};
