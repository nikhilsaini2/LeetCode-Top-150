/*
📌 Problem: Majority Element (Easy)

Pattern: Boyer–Moore Voting Algorithm

Key Idea:
Since majority element appears > n/2 times, maintain a candidate and vote count.

Steps:
1. Initialize count = 0, candidate = -1.
2. Iterate nums:
      - If count == 0 → set candidate = num.
      - If num == candidate → count++ else count--.
3. Return candidate.

Edge Cases:
- Array of size 1.
- Majority element appears consecutively or scattered.

Time / Space: O(n) / O(1)
*/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0, candidate = 0;
        for (int num : nums) {
            if (count == 0) candidate = num;
            count += (num == candidate) ? 1 : -1;
        }
        return candidate;
    }
};