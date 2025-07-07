class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target){
    /* { brute force or my approach
        int rem;
        vector<int> index;
        for(int i=0;i<numbers.size() && numbers[i]<=target;i++){
            rem=target-numbers[i];
            for(int j=i+1;j<numbers.size();j++){
                if(rem==numbers[j]) {
                index.push_back(i+1);
                index.push_back(j+1);
                return index; }
            }
        }  return {}; 
    } 
};*/

//optimized approach - tc-0(n)
int n=numbers.size();
int num;
int i=0,j=n-1;
while(i<j){
    num=numbers[i]+numbers[j];
    if(num<target) i++;
    else if(num>target) j--;
    else return {i+1,j+1};
} return {};
}
};


