class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        /*my approach is to store the elemts in the hash map and then check if the [i+1] wala no is present in the map then do count++ but ye thoda gaalt beacuse the array is unsorted */
        //APPROACH 1- TC=0(NLOGN)+0(n); sc=0(n)
       /* int n=nums.size();
        sort(nums.begin(),nums.end());
        int gloL,currL=1;
        if(n==0) return 0;
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]) continue;
            else if(nums[i]-1 ==nums[i-1]) currL++;
            else {gloL=max(gloL,currL); currL=1;}
        }
        gloL=max(gloL,currL);
        return gloL;*/

        

    
        unordered_set<int> s(nums.begin(), nums.end());
        int longest = 0;

        for (int num : s) {
            // Only start counting if it's the start of a sequence
            if (s.find(num - 1) == s.end()) {
                int currentNum = num;
                int streak = 1;

                while (s.find(currentNum + 1) != s.end()) {
                    currentNum++;
                    streak++;
                }

                longest = max(longest, streak);
            }
        }

        return longest;
    }
};


        

      
    
