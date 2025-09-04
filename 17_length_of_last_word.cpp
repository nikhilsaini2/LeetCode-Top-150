/*
📌 Problem: Length of Last Word (Easy)

Pattern: String Traversal

Key Idea:
Traverse from the end of the string, skip trailing spaces, then count characters until the next space.

Steps:
1. Start from the end of the string.
2. Skip trailing spaces.
3. Count characters until hitting a space or start of string.
4. Return the count.

Edge Cases:
- String with trailing spaces.
- Single word string.
- Empty string or only spaces.

Time / Space: O(n) / O(1)
*/

class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        
        int end = n - 1;
        while (end >= 0 && s[end] == ' ') {
            end--;
        }

        int count = 0;
        while (end >= 0 && s[end] != ' ') {
            count++;
            end--;
        }

        return count;
    }
};
