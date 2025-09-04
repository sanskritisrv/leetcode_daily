class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        vector<int> ans;
        int srow = 0, erow = m - 1, scol = 0, ecol = n - 1;
        while (srow <= erow && scol <= ecol) {
            // Traverse from left to right
            for (int j = scol; j <= ecol; j++) {
                ans.push_back(mat[srow][j]);
            }
            srow++;

            // Traverse from top to bottom
            for (int i = srow; i <= erow; i++) {
                ans.push_back(mat[i][ecol]);
            }
            ecol--;

            // Traverse from right to left
            if (srow <= erow) {
                for (int j = ecol; j >= scol; j--) {
                    ans.push_back(mat[erow][j]);
                }
            }
            erow--;

            // Traverse from bottom to top
            if (scol <= ecol) {
                for (int i = erow; i >= srow; i--) {
                    ans.push_back(mat[i][scol]);
                }
            }
            scol++;
        }
        return ans;
    }
};