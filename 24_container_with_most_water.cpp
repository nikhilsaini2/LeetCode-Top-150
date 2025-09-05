/*
📌 Problem: Container With Most Water (Medium)

Pattern: Two Pointers (Greedy)

Key Idea:
Max area = min(height[left], height[right]) * (right-left).
Shrink the smaller height side.

Steps:
1. left = 0, right = n-1.
2. Calculate area for each pair.
3. Update max area.
4. Move pointer at smaller height inward.
5. Continue until left >= right.

Edge Cases:
- Only 2 heights → single calculation.
- All heights equal → max = n-1 * height.

Time / Space: O(n) / O(1)
*/

class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0, right = height.size()-1;
        int Max = 0;
        while (left < right) {
            int curr = min(height[left], height[right]) * (right-left);
            Max = max(Max, curr);
            (height[left] < height[right]) ? left++ : right--;
        }
        return Max;
    }
};
