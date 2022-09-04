class Solution {
public:
    int arraySign(vector<int>& nums) {
//         int prod=1;
        
//         for(int i=0;i<nums.size();i++)
//         {
//             prod*=nums[i];
//         }
        
//         if(prod>1){
//             return 1;
//         }else if(prod<0){
//             return -1;
//         }
//         else{
//             return 0;
//         }
        
        int cnt=0;
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0){
                return 0;
            }
            
            if(nums[i]<0){
                cnt++;
            }
        }
        
        if(cnt%2==1){
            return -1;
        }
        
        return 1;
        
        
    }
};