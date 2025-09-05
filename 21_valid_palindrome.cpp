/*
📌 Problem: Valid Palindrome (Easy)

Pattern: Two Pointers

Key Idea:
Compare characters from both ends, skipping non-alphanumeric ones, 
and ensure they match (case-insensitive).

Steps:
1. Initialize left = 0, right = n-1.
2. Skip non-alphanumeric from both ends.
3. Compare lowercase chars.
4. If mismatch → false, else continue.
5. If fully scanned → true.

Edge Cases:
- Empty string.
- Only non-alphanumeric characters.
- Case-insensitivity check.

Time / Space: O(n) / O(1)
*/

class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0, right = s.size()-1;
        while (left < right) {
            while (left < right && !isalnum(s[left])) left++;
            while (left < right && !isalnum(s[right])) right--;

            if (tolower(s[left]) != tolower(s[right])) return false;
            left++;
            right--;
        }
        return true;
    }
};
