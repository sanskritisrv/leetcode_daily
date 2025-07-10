class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        // Step 1: Add new interval
        intervals.push_back(newInterval);

        // Step 2: Sort all intervals by start time
        sort(intervals.begin(), intervals.end());

        // Step 3: Merge overlapping intervals
        vector<vector<int>> result;
        for (auto interval : intervals) {
            if (result.empty() || result.back()[1] < interval[0]) {
                result.push_back(interval);  // No overlap
            } else {
                result.back()[1] = max(result.back()[1], interval[1]); // Merge
            }
        }

        return result;
    }
};
