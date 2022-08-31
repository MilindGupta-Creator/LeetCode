class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // harr number ka left and uska right fir bss usko uss respective waale
        // index main put krrdo
        
        int n = nums.size();
        vector<int>ans(n),left(n),right(n);
        left[0]=nums[0];
        right[n-1]=nums[n-1];
        
        for(int i=1;i<nums.size();i++)
        {
            left[i] = nums[i]*left[i-1];
        }
        
        for(int i=n-2;i>=0;i--)
        {
            right[i] = nums[i]*right[i+1];
        }
        
        for(int i=0;i<n;i++)
        {
            int p=1;
            if(i>0)
            {
                p*=left[i-1];
            }
            if(i<n-1)
            {
                p*=right[i+1];
            }
            
            ans[i]=p;
        }
        
        return ans;
        
    }
};