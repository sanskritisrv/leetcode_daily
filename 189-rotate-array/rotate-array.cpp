class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k%=nums.size();
        reverse(nums.begin(),nums.end());
                reverse(nums.begin(),nums.begin()+k);  // in c++ reverse(begin,end) end is not included that is end is exclusive and therefore the loop is from nums.begin()+k and not nums.begin()+k-1;
                        reverse(nums.begin()+k,nums.end());


        
    }

};

//approach- reverse the entire array and then reverse till k and after k 