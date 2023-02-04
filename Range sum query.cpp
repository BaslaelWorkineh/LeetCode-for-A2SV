class NumMatrix {
public:
vector<vector<int>>dp;
    NumMatrix(vector<vector<int>>& matrix) {
        //if(matrix.size()==0)
        dp.resize(matrix.size()+1,vector<int>(matrix[0].size()+1));
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                dp[i+1][j+1]=dp[i+1][j]+matrix[i][j]+dp[i][j+1]-dp[i][j];
            }
        }
         
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
 
       return dp[row2+1][col2+1]-dp[row2+1][col1]-dp[row1][col2+1]+dp[row1][col1];
    }
};
