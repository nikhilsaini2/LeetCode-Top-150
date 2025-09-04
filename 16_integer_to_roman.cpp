/*
📌 Problem: Integer to Roman (Medium)

Pattern: Greedy

Key Idea:
Repeatedly subtract the largest Roman numeral value until the number is reduced.

Steps:
1. Define value-symbol pairs from largest to smallest.
2. Iterate over pairs.
3. While num >= value, subtract value and append symbol.
4. Continue until num = 0.

Edge Cases:
- Small numbers like 1, 4, 9.
- Large numbers up to 3999.
- Proper handling of subtractive cases (IV, IX, XL, XC, CD, CM).

Time / Space: O(1) / O(1)
*/

class Solution {
public:
    string intToRoman(int num) {
        vector<pair<int, string>> val = {
            {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
            {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
            {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}
        };

        string result;
        for (auto &[value, symbol] : val) {
            while (num >= value) {
                num -= value;
                result += symbol;
            }
        }
        return result;
    }
};
