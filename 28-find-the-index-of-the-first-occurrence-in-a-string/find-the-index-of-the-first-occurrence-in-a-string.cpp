class Solution {
public:
    int strStr(string haystack, string needle) {


        int n=needle.size();
        int m=haystack.size();
        if(n>m) return -1;
        if(n==0) return 0;
        for(int i=0;i<=m-n;i++)
        {
            if(haystack.substr(i,n)== needle) return i;
            
        }
        return -1;
        
    }

};