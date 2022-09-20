class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        
//         int cnt=0;
        
//         for(int i=0;i<nums.size();i++)
//         {
//             for(int j=i+1;j<nums.size();j++)
//             {
//                 if(nums[i]==nums[j])
//                 {
//                     cnt++;
//                 }
//             }
//         }
        
//         return cnt;
        
        
        int cnt=0;
        
        int arr[101]={};
        
        for(auto it:nums)
        {
            arr[it]++;
        }
        
        for(auto it:arr)
        {
            if(it)
            {
                cnt+=it*(it-1)/2;
            }
        }
        
        return cnt;
        
        
    }
};