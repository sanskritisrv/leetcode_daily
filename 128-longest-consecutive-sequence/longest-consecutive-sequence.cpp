class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        /*my approach is to store the elemts in the hash map and then check if the [i+1] wala no is present in the map then do count++ but ye thoda gaalt beacuse the array is unsorted */
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int gloL,currL=1;
        if(n==0) return 0;
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]) continue;
            else if(nums[i]-1 ==nums[i-1]) currL++;
            else {gloL=max(gloL,currL); currL=1;}
        }
        gloL=max(gloL,currL);
        return gloL;

        

        
    }
};