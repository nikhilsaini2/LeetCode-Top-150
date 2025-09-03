/*
📌 Problem: Roman to Integer (Easy)

Pattern: Hash Map + String Traversal

Key Idea:
Subtract when smaller numeral precedes larger one.

Steps:
1. Create map of Roman → integer values.
2. Traverse string left to right.
3. If current < next, subtract. Else, add.
4. Return total.

Edge Cases:
- Single Roman numeral.
- Subtractive cases (IV, IX, XL, XC, CD, CM).
- Large inputs like "MMMCMXCIV" (3994).

Time / Space: O(n) / O(1)
*/

class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> val = {
            {'I', 1}, {'V', 5}, {'X', 10}, 
            {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}
        };

        int n = s.size();
        int total = 0;

        for (int i = 0; i < n; i++) {
            if (i + 1 < n && val[s[i]] < val[s[i + 1]]) {
                total -= val[s[i]];
            } else {
                total += val[s[i]];
            }
        }
        return total;
    }
};
