/*
📌 Problem: Product of Array Except Self (Medium)

Pattern: Prefix & Suffix Product

Key Idea:
Compute prefix and suffix products without using division.

Steps:
1. Compute prefix product for each index.
2. Compute suffix product and multiply with prefix.
3. Result array gives product of all elements except self.

Edge Cases:
- Array with 1 element (not valid here).
- Contains zero(s).
- Large numbers (avoid overflow with long long if needed).

Time / Space: O(n) / O(1) (excluding output array)
*/

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        int product = 1;

        for(int i=0; i<n; i++){
            product *= nums[i];
            ans.push_back(product);
        }

        product = 1;
        for(int i=n-1; i>0; i--){
            ans[i] = ans[i-1] * product;
            product *= nums[i];
        }
        ans[0] = product;

        return ans;
    }
};
