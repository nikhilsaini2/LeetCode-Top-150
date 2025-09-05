/*
📌 Problem: 3Sum (Medium)

Pattern: Sorting + Two Pointers

Key Idea:
Fix one element, then use two-pointer search for the remaining pair.

Steps:
1. Sort nums.
2. Loop i from 0 → n-3:
   - Skip duplicates for i.
   - Set left = i+1, right = n-1.
   - While left < right:
     - If sum = 0 → push triplet, skip duplicates, move both.
     - If sum < 0 → left++.
     - If sum > 0 → right--.
3. Return result list.

Edge Cases:
- Less than 3 elements → empty result.
- Duplicates handled.

Time / Space: O(n^2) / O(1)
*/

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        int n = nums.size();
        sort(nums.begin(), nums.end());

        for (int i = 0; i < n-2; i++) {
            if (i > 0 && nums[i] == nums[i-1]) continue;
            int left = i+1, right = n-1;
            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];
                if (sum == 0) {
                    res.push_back({nums[i], nums[left], nums[right]});
                    while (left < right && nums[left] == nums[left+1]) left++;
                    while (left < right && nums[right] == nums[right-1]) right--;
                    left++;
                    right--;
                } else if (sum < 0) left++;
                else right--;
            }
        }
        return res;
    }
};
