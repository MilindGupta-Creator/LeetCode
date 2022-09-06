class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int>mp;
        
        for(auto it:nums){
            mp[it]++;
        }
        
        priority_queue<pair<int,int>>pq;
        
        for(auto it:mp){
            pq.push({-it.second,it.first});
            //min heap
        }
        
        vector<int>ans;
        while(!pq.empty())
        {
            auto cnt = -1*(pq.top().first);
            
            while(cnt--){
                ans.push_back(pq.top().second);
            }
            
            pq.pop();
        }
        
        return ans;
        
        
            
        
    }
};