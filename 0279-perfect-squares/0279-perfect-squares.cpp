class Solution {
public:
    
    
    int numSquares(int x) {
        
        vector<int>dp(10001,INT_MAX);
        
        dp[0]=0;
        
        for(int n=1;n<=x;n++)
        {
            for(int i=1;i*i<=n;i++) 
            {
                int op1 = 1+dp[n-i*i];
                dp[n] = min(op1,dp[n]);  // dp[n] is nothing but the answer for if n=1,n=2,n=3......
            }
        }
        
        return dp[x];
    }
};