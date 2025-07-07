class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int leng = 0, maxl = 0;

        int hash[256];
        fill(hash, hash + 256, -1);  // initialize all to -1

        int l = 0, r = 0;

        while (r < n) {
            if (hash[s[r]] != -1 && hash[s[r]] >= l) {
                l = hash[s[r]] + 1;
            }

            hash[s[r]] = r;
            leng = r - l + 1;
            maxl = max(maxl, leng);
            r++;
        }

        return maxl;
    }
};
