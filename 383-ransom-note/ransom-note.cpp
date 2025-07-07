class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> freq;

        // Count frequency of each character in magazine
        for (char ch : magazine) {
            freq[ch]++;
        }

        // Try to use characters for ransomNote
        for (char ch : ransomNote) {
            if (freq[ch] == 0) {
                return false; // Not enough of this character
            }
            freq[ch]--;
        }

        return true; // All characters matched
    }
};
