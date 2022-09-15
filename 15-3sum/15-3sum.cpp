class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        
            vector<vector<int>>v;
        if(nums.size()<3){
            return v;
        }
        
        for(int i=0;i<nums.size()-2;i++)
        {
            // b+c = -a
            
            if(i==0 || (i>0 and nums[i]!=nums[i-1]))
            {
                int sum = -nums[i];
                int low = i+1;
                int high = nums.size()-1;
                
                while(low<high)
                {
                    if(nums[low]+nums[high]==sum)
                    {
                        vector<int>temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[low]);
                        temp.push_back(nums[high]);
                        
                        v.push_back(temp);
                        
                        while(low<high and nums[low]==nums[low+1]){
                            low++;
                        }
                        
                        while(low<high and nums[high]==nums[high-1]){
                            high--;
                        }
                        
                        low++;
                        high--;
                        
                        
                    }
                    else if(nums[low]+nums[high]<sum){
                        low++;
                    }
                    else{
                        high--;
                    }
                    
                    
                }
                
            }
            
        }
        
            return v;
            
    }
};