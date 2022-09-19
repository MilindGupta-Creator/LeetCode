class Solution {
public:
    int longestMountain(vector<int>& arr) {
        
        int n = arr.size();
        int ans=0;
        
        for(int i=1;i<n-1;)
        {
            if(arr[i]>arr[i-1]  and arr[i]>arr[i+1])
            {
                
                int cnt=1;
                int j=i;
                
                // current peak se left chale jaao
                
                while(j>0 and arr[j]>arr[j-1])
                {
                    cnt++;
                    j--;
                }
                
                // current peak se right side chale jaao
                while(i<n-1 and arr[i]>arr[i+1])
                {
                    cnt++;
                    i++;
                }
                
                ans = max(cnt,ans);
                
                
            }
            else{
                i++;
            }
        }
        
        return ans;
        
    }
};