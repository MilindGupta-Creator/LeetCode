class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int>mp;
        
        for(auto it:nums)
        {
            mp[it]++;
        }
        
        priority_queue<pair<int,int>>pq; // freq,element
        
        for(auto it:mp)
        {
            pq.push({-1*it.second,it.first});
        }
        
        vector<int>ans;
        
        while(!pq.empty())
        {
            auto cnt = -1*(pq.top().first);
            
            while(cnt--)
            {
                ans.push_back(pq.top().second);
            }
            
            pq.pop();
        }
        
        
        return ans;
    }
};