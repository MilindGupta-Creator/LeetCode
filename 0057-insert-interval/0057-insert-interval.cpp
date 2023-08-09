class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        
        vector<vector<int>>ans;
        
        int n = intervals.size();
        
        for(int i=0;i<n;i++)
        {
            if(newInterval[0]>intervals[i][1]) // first analyze from 2nd example that when we dont need to merge at all that if 4>2 it wont come inside so directly push it in ans
            {
                ans.push_back(intervals[i]);
            }
            else if(newInterval[1]<intervals[i][0]) // similarly check here just the opp. of above case and push our new ans and make our new interval as intervals[i]
            {
                ans.push_back(newInterval);
                newInterval = intervals[i];
            }
            else // in actual merging just compare min and max everywhere
            {
                newInterval[0] = min(newInterval[0] , intervals[i][0]);
                newInterval[1] = max(newInterval[1] , intervals[i][1]);
                
            }
        }
        
        ans.push_back(newInterval);
        return ans;
        
    }
};