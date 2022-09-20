class Solution {
public:
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        // based on the pattern of longest common subsequence
        // https://www.youtube.com/watch?v=UZRkpGk943Q
        int n = nums1.size();
        int m = nums2.size();
        
        int dp[n+1][m+1];
        for(int i=0;i<n+1;i++)
        {
            for(int j=0;j<m+1;j++)
            {
                if(i==0 || j==0)
                {
                    dp[i][j]=0;
                }
            }
        }
        int len=0;
        for(int i=1;i<n+1;i++)
        {
            for(int j=1;j<m+1;j++)
            {
                if(nums1[i-1]==nums2[j-1])
                {
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else
                {
                    dp[i][j]=0;
                }
                
                len = max(dp[i][j],len);
            }
        }
        
        return len;
        
    }
};