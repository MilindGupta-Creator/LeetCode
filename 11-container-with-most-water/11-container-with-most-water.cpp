class Solution {
public:
    int maxArea(vector<int>& height) {
       //m1. loop over the entire array and find max area
        
//         int water=0;
        
//         int n = height.size();
        
//         for(int i =0;i<n;i++)
//         {
//             for(int j=1;j<n;j++)
//             {
//                 water = max((min(height[i],height[j])*(j-i)),water);
//             }
//         }
        
//         return water;
        
        int water=0;
        
        int i=0,j=height.size()-1;
        
        while(i<j)
        {
            int length = min(height[i],height[j]);
            int width = j-i;
            
            water = max(water,length*width);
            if(height[i]<height[j]){
                i++;
            }else{
                j--;
            }
            
        }
        
        return water;
        
        
    }
};