class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int> result;
        if (s.empty() || words.empty()) return result;

        int wordLen = words[0].length();
        int wordCount = words.size();
        int totalLen = wordLen * wordCount;
        int n = s.length();

        // Word frequency map
        unordered_map<string, int> wordMap;
        for (const string& word : words) {
            wordMap[word]++;
        }

        // Try every offset within one word length
        for (int offset = 0; offset < wordLen; ++offset) {
            int left = offset, right = offset;
            unordered_map<string, int> windowMap;

            while (right + wordLen <= n) {
                string word = s.substr(right, wordLen);
                right += wordLen;

                if (wordMap.find(word) != wordMap.end()) {
                    windowMap[word]++;

                    // Too many of this word? Slide window
                    while (windowMap[word] > wordMap[word]) {
                        string leftWord = s.substr(left, wordLen);
                        windowMap[leftWord]--;
                        left += wordLen;
                    }

                    // Window size matches totalLen? Valid
                    if (right - left == totalLen) {
                        result.push_back(left);
                    }

                } else {
                    // Reset window
                    windowMap.clear();
                    left = right;
                }
            }
        }

        return result;
    }
};
