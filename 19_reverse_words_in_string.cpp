/*
📌 Problem: Reverse Words in a String (Medium)

Pattern: String Parsing + Two-Pointer (via split & reverse)

Key Idea:
Split the string into words, reverse their order, and join back with spaces.

Steps:
1. Use stringstream to split by spaces.
2. Store words in a vector.
3. Reverse the vector of words.
4. Join words with single spaces.

Edge Cases:
- Multiple spaces between words.
- Leading or trailing spaces.
- Single word input.

Time / Space: O(n) / O(n)
(n = length of string)
*/

class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word;
        vector<string> words;
        
        while (ss >> word) {
            words.push_back(word);
        }

        reverse(words.begin(), words.end());

        string result;
        for (int i = 0; i < words.size(); i++) {
            if (i > 0) result += " ";
            result += words[i];
        }

        return result;
    }
};
