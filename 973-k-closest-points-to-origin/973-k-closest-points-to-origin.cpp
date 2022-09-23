class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        
        priority_queue<pair<int,pair<int,int>>>maxHeap;
        
        for(int i=0;i<points.size();i++)
        {
            int x = points[i][0];
            int y = points[i][1];
            
            int dis = x*x + y*y;
            
            maxHeap.push({dis,{points[i][0],points[i][1]}});
            
            if(maxHeap.size()>k)
            {
                maxHeap.pop();
            }
        }
        
        vector<vector<int>>ans;
        
        while(!maxHeap.empty())
        {
            ans.push_back({maxHeap.top().second.first,maxHeap.top().second.second});
            maxHeap.pop();
        }
        
        
        return ans;
        
    }
};