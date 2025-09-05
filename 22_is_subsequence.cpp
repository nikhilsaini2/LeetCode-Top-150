/*
📌 Problem: Is Subsequence (Easy)

Pattern: Two Pointers

Key Idea:
Traverse both strings; match characters in order. 
If all chars of s are found → true.

Steps:
1. Initialize i = 0 (s), j = 0 (t).
2. While j < |t|, check if s[i] == t[j].
3. If match → move i.
4. Always move j.
5. If i == |s| → true.

Edge Cases:
- s empty → true.
- s longer than t → false.

Time / Space: O(n) / O(1)
*/

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0, j = 0;
        while (i < s.size() && j < t.size()) {
            if (s[i] == t[j]) i++;
            j++;
        }
        return i == s.size();
    }
};
