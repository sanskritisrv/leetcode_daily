class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
       int totalgas=0, totalcost=0,start=0,currentgas=0;

       for(int j=0;j<gas.size();j++){
        totalgas += gas[j];
       } 

       for(int k=0;k<cost.size();k++){
        totalcost+=cost[k];
       }

       if(totalcost>totalgas) return -1;

       else {
        for(int i=0;i<gas.size();i++){
             currentgas+= (gas[i]-cost[i]);
            if(currentgas<0){
                start=i+1;
                currentgas=0;

            }
        }
       }return start;
    }
};