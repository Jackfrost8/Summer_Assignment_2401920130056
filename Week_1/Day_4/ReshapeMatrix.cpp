class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<vector<int>> ans;
        int n=mat.size();
        int m=mat[0].size();
        vector<int>a;
        if(r*c != m*n) return mat;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                a.push_back(mat[i][j]);
                if(a.size()==c){
                    ans.push_back(a);
                    a.clear();
                }
            }
        }
        return ans;
    }
};