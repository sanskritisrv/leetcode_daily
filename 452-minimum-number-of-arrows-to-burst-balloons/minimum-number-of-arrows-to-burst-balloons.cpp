class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int n=points.size();
        sort(points.begin(), points.end());
        vector<int>prev=points[0];
        int count=1;
        
        for(int i=1;i<n;i++){
            int currstart=points[i][0];
            int currend=points[i][1];
            int prevstart=prev[0];
            int prevend=prev[1];

           if(currstart>prevend){//no overlap
            count++;
            prev=points[i];


           }
           else {
           //overlap
           prev[0]=max(currstart,prevstart);
           prev[1]=min(currend,prevend);
           }
           

        }
    
        return count;
    }
};