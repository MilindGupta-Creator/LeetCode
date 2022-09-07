class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
//         for(int i=0;i<nums.size();i++)
//         {
//             for(int j=i+1;j<nums.size();j++)
//             {
//                 if(nums[i]+nums[j]==target){
//                     return {i,j};
//                 }
//             }
//         }
        
//         return {};
        
        unordered_map<int,int>mp;
            
        vector<int>v;
        
        for(int i=0;i<nums.size();i++)
        {
            if(mp.find(target-nums[i])!=mp.end())
            {
                v.push_back(mp[target-nums[i]]);
                v.push_back(i);
            }
            else{
                mp[nums[i]]=i;
            }
        }
        
        return v;
        
        
    }
};