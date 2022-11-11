class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // we just need to check if the next element
        // is different then we carry it back to the same element
        
        int k=1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]!=nums[i-1])
            {
                nums[k]=nums[i];
                k++;
            }
        }
        
        return k;
        
        
    }
};