class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        // Sort intervals based on the start time
        sort(intervals.begin(), intervals.end());
        
        vector<vector<int>> merged;

        for (auto interval : intervals) {
            // If merged is empty OR no overlap with last interval
            if (merged.empty() || merged.back()[1] < interval[0]) {
                merged.push_back(interval); // Add as new interval
            } else {
                // Overlap: merge with last interval
                merged.back()[1] = max(merged.back()[1], interval[1]);
            }
        }

        return merged;
    }
};
