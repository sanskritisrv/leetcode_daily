class Solution {
public:
    string convert(string s, int numRows) {
        vector<string> zigza(numRows);
        int id=0;
        int i=0;
        int n=s.size();
        bool zag=true;
        if(numRows==1 || s.size()<=numRows) return s;
        while(i<n){
            zigza[id].push_back(s[i]);
            if(id==numRows-1) zag=false;
            if(id==0) zag=true;

            if(zag) id++;
            else id--;
            i++;
        

        }
        string result;
        for( auto &it : zigza){
            result+=it;}
            return result;
        }

    
    };