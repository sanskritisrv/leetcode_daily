class Solution {
public:
    int candy(vector<int>& ratings) {
        int n=ratings.size();
        vector<int> count(n,1);
        //l2r
        for(int i=1;i<n;i++){
            if(ratings[i]>ratings[i-1]){
                count[i]=max(count[i],count[i-1]+1);
            }
        }

        //r2l
         for(int i=n-2;i>=0;i--){
            if(ratings[i]>ratings[i+1]){
                count[i]=max(count[i],count[i+1]+1);
            }
        }
        int result=0;
        for(int i=0;i<n;i++)
        {
            result+=count[i];
        }

        return result;
    }

}; //sc-0(n)

//approach 2 - slope method sc-0(1)

/*
i=1
while(i<n)
{
    if(ratings[i]==ratings[i-1])
    i++ ;
    continue;

    while(ratings[i]>ratings[i-1])
    {
        peak++;
        i++;
        candy+=peak;
        
    } 
    if (i==n) return candy;

    while( i<n && ratings[i]<ratings[i-1])
    dip++;
    i++;
    candy+= dip;
}

candy-=min(peak,dip);
return candy;*/
