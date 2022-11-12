class Solution {
public:
    int subarrayGCD(vector<int>& nums, int k) {
        /*
            nums = [9,3,1,2,6,3] , k = 3
            
            gcd(9,3) = 3 which is equal to k
            
            gcd(9,3,1) = 1 which is not equal to k but its actually less than
            so we can actually reject the further elements as it will 
            always give the gcd which is less than k
            
            also suppose for [2,6,3]
            
            gcd(2,6) = 2
            gcd(2,6,3)=1 actually we don't need to find the gcd od 2,6,3 
            we can take the old gcd of(2,6) with the new number 3
        
        */
        
        int n = nums.size();
        int ans=0;
        
        for(int i=0;i<n;i++)
        {
            int gcd = nums[i];
            for(int j=i;j<n;j++)
            {
                gcd = __gcd(gcd,nums[j]);
                
                if(gcd==k)
                {
                    ans++;
                }
                
                if(gcd<k)
                {
                    break;
                }
                    
            }
        }
        
        return ans;
        
        
    }
};