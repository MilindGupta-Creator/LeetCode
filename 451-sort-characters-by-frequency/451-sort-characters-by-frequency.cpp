class Solution {
public:
    string frequencySort(string s) {
        
        unordered_map<char,int>mp;
        
        for(auto it:s){
            mp[it]++;
        }
        
        priority_queue<pair<int,char>>pq;
        
        for(auto it:mp)
        {
            pq.push({it.second,it.first});
        }
        
        string ans="";
        
        while(!pq.empty())
        {
            pair<int,char>p = pq.top();
            pq.pop();
            
            while(p.first--)
            {
                ans+=p.second;
            }
            
        }
        
        
        return ans;
    }
};