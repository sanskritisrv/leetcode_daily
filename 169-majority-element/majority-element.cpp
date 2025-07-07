class Solution { // moores voting algo
public:
    int majorityElement(vector<int>& nums) {
        int freq=0,ans=0;
        for(int i=0;i<nums.size();i++)
        {
            if (freq==0)
            {ans=nums[i];}    

            if(nums[i]==ans)   // here we are taking freq to see the majority elemet and decreasing the counter because we are seeing the max votes tan element can get 
           { freq++;}
           else 
          { freq--;}
        }return ans;
    }
    
};