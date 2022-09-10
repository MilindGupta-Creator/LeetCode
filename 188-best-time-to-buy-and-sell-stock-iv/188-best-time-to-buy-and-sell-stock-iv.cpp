class Solution {
public:
    
    int dp[50001][2][101];
    int solve(int i,bool own, int txn,vector<int> &prices ,int k){
        if(i==prices.size()||txn==k)
            return 0;
        if(dp[i][own][txn]!=-1)
            return dp[i][own][txn];
        if(own){
            return dp[i][own][txn] = max(prices[i] + solve(i+1,0,txn+1,prices,k), solve(i+1,1,txn, prices,k));
            }
        else{
            return dp[i][own][txn] = max((-prices[i] + solve(i+1,1,txn,prices,k)), solve(i+1,0,txn,prices,k));
        }
    }
    
    int maxProfit(int k, vector<int>& prices) {
        /*
        dp[i][!own][j] = max profit from [i...N] such that 
        no stock , at most can do j trans
        
        max(-prices[i]+dp[i+1][own][j] , dp[i+1][!own][j]);
        
        
        
        dp[i][own][j] = max .....
        can stock at most j transactions
        // either sell or not (not sell means i have stock now)
        max(prices[i]+dp[i+1][!own][j-1] , dp[i][own][j])
        
        */
        
        memset(dp,-1,sizeof dp);
        return  solve(0,0,0,prices,k);
        
    }
};