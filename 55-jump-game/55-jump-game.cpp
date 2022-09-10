class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        // just check is it possible that jump is more than the index
        // and how far my reachable index can go
        
        int reachable=0;// 0th idx
            
            for(int i=0;i<nums.size();i++)
            {
                if(i>reachable){
                    return false;
                }
                reachable = max(reachable,i+nums[i]);
            }
        
        return true;
        
    }
};