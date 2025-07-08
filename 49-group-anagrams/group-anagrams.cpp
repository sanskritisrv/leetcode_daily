class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        /* the approach is to sort each string and then store the strings witht ehsame sorting togehter in hash maps*/
        string temp;
        unordered_map<string, vector<string>>mp;
        for(auto it:strs){
            temp=it;
            sort(it.begin(), it.end());
            mp[it].push_back(temp);
        } 
        vector<vector<string>> ans;
        for(auto x:mp){
            ans.push_back(x.second);
        }
        return ans;
        
    }
};