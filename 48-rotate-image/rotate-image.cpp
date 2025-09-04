class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        //2 steps
        int m =matrix.size(), n=matrix[0].size();
        for(int i=0;i<m;i++){
            for(int j=i;j<n;j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        //reverse the transpose now 
        for(int i=0; i<m;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }

        
    }
};