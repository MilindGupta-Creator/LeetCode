class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        /*
            sum = 28;
            arr[] =  [ 1 , 7 , 3 , 6 , 5 , 6 ]
            
            (1) lsum = 0 , rsum = 27(subtracted index 0 value) 
                now they are not equal from starting index 0  => now at next iteration lsum increases
            (2) lsum=1 , rsum = 20(subtracted index 1 value)
            (3) lsum=8 , rsum = 17(subtracted index 2 value)
            (4) lsum=11 , rsum = 11(subtracted index 3 value)
        
            the 4th statement is actually
                lsum = 1+7+3 == rsum = 5+6
                
                and index value is now 3
        */
       // if(n==1)return 1;
        
        int sum=0;
        
        for(auto it:nums)sum+=it;
        
        int lsum=0,rsum=sum;
        
        for(int i=0;i<nums.size();i++)
        {
            rsum = rsum-nums[i];
            
            if(lsum==rsum){
                return i;
            }
            
            lsum = lsum+nums[i];
        }
        
        return -1;
        
        
    }
};