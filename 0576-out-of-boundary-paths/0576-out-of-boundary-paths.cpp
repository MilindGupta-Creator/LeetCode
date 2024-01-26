class Solution {
public:
    long mod  = 1e9+7;
    
    long func(vector<vector<vector<long>>> &dp, int i, int j, int move){
        
        int m = dp.size();
        
        int n = dp[0].size();
        
        if(i<0||j<0||i>=m|| j>=n) return 1;
        
        if(move==0) return 0;
        
        if(dp[i][j][move]!=-1) return dp[i][j][move];
        
        dp[i][j][move] = func(dp,i+1,j,move-1)
                        +
                      func(dp,i-1,j,move-1)
                        +
                      func(dp,i,j-1,move-1)
                        +
                      func(dp,i,j+1,move-1);
        
        dp[i][j][move]%=mod;
        
        return dp[i][j][move];
        
    }
    int findPaths(int m, int n, int move, int startRow, int startColumn) {
        // since 3 variables are changing so 3d dp movesLeft, xcoordinate, and ycoordinate
        
         vector<vector <vector<long>>> mat(m,vector<vector<long>>(n,vector<long>(move+1,-1)));
        
        return func(mat,startRow,startColumn, move)%mod;
    }
};