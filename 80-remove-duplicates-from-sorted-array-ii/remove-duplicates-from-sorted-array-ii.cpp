class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int i,k=0;
        for(i=0;i<nums.size();i++)
        {
            if(i==0 || i==1 || nums[k-2]!=nums[i])
            {
                nums[k]=nums[i];
                k++;
            }
        }return k;
    }
};