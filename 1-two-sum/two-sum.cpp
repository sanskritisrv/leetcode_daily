class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       /* two approaches to solve this question 
       1. put two loops i wala from 0 and then j from i+1 and we check each no but the tc is 0(n2) for this 
       below is the optimal approach */

       int n=nums.size();
       unordered_map<int , int> mp;
       for(int i=0;i<n;i++){
        int rem=target-nums[i];
        if(mp.find(rem) != mp.end()){
            return {mp[rem],i};
        }

        mp[nums[i]]=i;

       } 
       return {};
    }
};