class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        int sc=0,ec=n-1;
        int sr=0,er=m-1;
        vector<int>ans;
        while(sr<=er || sc<=ec){
            //right;
            for(int i=sc;i<=ec &&sr<=er;i++)ans.push_back(matrix[sr][i]);
            sr++;
            if(sr>er)break;
            //down
            for(int i=sr;i<=er&&sc<=ec;i++) ans.push_back(matrix[i][ec]);
            ec--;
            if(sc>ec)break;
            //left
            for(int i=ec;i>=sc&&sc<=ec;i--) ans.push_back(matrix[er][i]);
            er--;
            if(sr>er)break;
            //up
            for(int i=er;i>=sr &&sr<=er;i--)ans.push_back(matrix[i][sc]);
            sc++;
            if(sc>ec)break;
        }
        return ans;
    }
};