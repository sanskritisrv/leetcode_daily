class Solution {
public:
    bool isAnagram(string s, string t) {
       //one apprach of this problem is to sort the entire s and t and just chech for equality but tc over there is nlogn .
      /* sort(begin(s), end(s));
       sort(begin(t),end(t));
       if(s==t) return true;
       else return false;*/

    
      vector<int>count(26,0); 
       if(s.size() != t.size()) return false;
       for(int i=0;i<s.size();i++){
        count[s[i]-'a']++;
        count[t[i]-'a']--;
       }
       for(int j=0;j<26;j++){
        if(count[j] !=0) return false;
       }
       return true;
    }
};