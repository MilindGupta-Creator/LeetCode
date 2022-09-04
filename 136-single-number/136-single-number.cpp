class Solution {
public:
    int singleNumber(vector<int>& nums) {
//         unordered_map<int,int>mp;
        
//         for(auto it:nums){
//             mp[it]++;
//         }
        
//         for(auto it:mp){
//             if(it.second==1){
//                 return it.first;
//             }
//         }
        
//         return -1;
        
        int ans=0;
        
        for(int i=0;i<nums.size();i++)
        {
            ans = ans^nums[i];
        }
        
        return ans;
        
        
    }
};