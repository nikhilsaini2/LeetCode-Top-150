/*
📌 Problem: Longest Common Prefix (Easy)

Pattern: Sorting + String Matching

Key Idea:
After sorting the strings, the common prefix of the first and last string
will be the common prefix for the entire array.

Steps:
1. Sort the array of strings.
2. Compare the first and last strings character by character.
3. Count matching characters.
4. Return substring of matches.

Edge Cases:
- Empty input array.
- No common prefix → return "".
- All strings identical.

Time / Space: O(n log n + m) / O(1)
(n = number of strings, m = length of shortest string)
*/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

        sort(strs.begin(), strs.end());
        string first = strs.front();
        string last = strs.back();
        int i = 0;

        while (i < first.size() && i < last.size() && first[i] == last[i]) {
            i++;
        }

        return first.substr(0, i);
    }
};
