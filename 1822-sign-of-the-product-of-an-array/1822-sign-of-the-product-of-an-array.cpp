class Solution {
public:
    int arraySign(vector<int>& nums) {
//         int product=1;
        
//         for(int i=0;i<nums.size();i++)
//         {
//             product*=nums[i];
//         }
        
//         if(product>=1){
//             return 1;
//         }
//         else if(product<0){
//             return -1;
//         }else{
//             return 0;
//         }
        
        int cnt=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<0){
                cnt++;
            }
            if(nums[i]==0){
                return 0;
            }
        }
        
        if(cnt%2==1){
            return -1;
        }else{
            return 1;
        }
        
    }
};