class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.size() != t.size()) return false;

        unordered_map<char, char> mp1; // s -> t
        unordered_map<char, char> mp2; // t -> s

        for (int i = 0; i < s.size(); i++) {
            char ch1 = s[i];
            char ch2 = t[i];

            // Check if ch1 already mapped and if it maps to a different character
            if (mp1.count(ch1) && mp1[ch1] != ch2) return false;

            // Check if ch2 already mapped and if it maps to a different character
            if (mp2.count(ch2) && mp2[ch2] != ch1) return false;

            mp1[ch1] = ch2;
            mp2[ch2] = ch1;
        }

        return true;
    }
};
