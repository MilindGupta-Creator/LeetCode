class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        /*
        
        in starting we know that it will be even only so we will see that whether at last it's even and the beginning it should be odd then only we should perform swap Operation
        
        
        */
        
        int i=0;
        int j=nums.size()-1;
        
        while(i<j)
        {
            if(nums[j]%2==0)
            {
                if(nums[i]%2!=0){
                    swap(nums[i++],nums[j--]);
                }
                else{
                    i++;
                }
            }
            else{
                j--;
            }
            
        }
        
        return nums;
        
    }
};