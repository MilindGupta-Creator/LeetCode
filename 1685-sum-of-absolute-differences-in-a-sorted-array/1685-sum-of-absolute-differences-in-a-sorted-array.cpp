class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        
        int sum=0,sofar=0;
        for(auto it:nums){
            sum+=it;
        }
         int n=nums.size();
        vector<int>ans;
       
        for(int i=0;i<nums.size();i++)
        {
            ans.push_back( sum- (n-i)*nums[i] + (i*nums[i]) - sofar );
            sum-=nums[i];
            sofar+=nums[i];
            
        }
        
        
        return ans;
        
    }
};