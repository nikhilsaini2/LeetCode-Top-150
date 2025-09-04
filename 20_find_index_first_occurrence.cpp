/*
📌 Problem: Find the Index of the First Occurrence in a String (Easy)

Pattern: String Matching (Naive)

Key Idea:
Check every possible substring of haystack with length = needle, 
and return the first match.

Steps:
1. Get sizes of haystack (n) and needle (m).
2. Loop i from 0 → n-m.
3. Compare haystack.substr(i, m) with needle.
4. Return index if match, else -1.

Edge Cases:
- Empty needle → return 0.
- Needle longer than haystack → return -1.
- Needle not found.

Time / Space: O(n * m) / O(1)
(n = length of haystack, m = length of needle)
*/

class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size(), m = needle.size();
        if (m == 0) return 0;

        for (int i = 0; i + m <= n; i++) {
            if (haystack.substr(i, m) == needle) {
                return i;
            }
        }
        return -1;
    }
};
