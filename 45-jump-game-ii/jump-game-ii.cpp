#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        
        if (n <= 1) return 0; // Already at the end

        int jumps = 0;
        int currentEnd = 0;
        int farthest = 0;

        for(int i = 0; i < n - 1; i++) {
            farthest = max(farthest, i + nums[i]); // Maximum reachable index so far
            
            // When we reach the end of the range of the current jump
            if(i == currentEnd) { 
                jumps++;               // We must jump now
                currentEnd = farthest; // Update the end boundary of this jump

                // Optimization: if we can already reach or cross the last index, stop
                if(currentEnd >= n - 1) break;
            }
        }

        return jumps;
    }
};
