class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=0;
        for(auto it:nums)
            sum+=it;
        
        int n = nums.size();
        int total = n*(n+1)/2; 
        
        return total-sum;
    }
};