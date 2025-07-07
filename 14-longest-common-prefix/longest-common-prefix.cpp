class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        //brute force approach is taking the characters of each array and comapring with one another but that would be too lengthy and hence to optimize it we sort the array of strings first and then comapre the characters of the first and last string .
      if(strs.empty()) return "";

      sort(strs.begin(), strs.end());
      string first= strs[0];
      string last= strs[strs.size()-1];
      string result="";
      for(int i=0;i<min(first.size(),last.size());i++){
        if(first[i]!=last[i]) break;
        result+= first[i];
      }
      return result;
    }


    };