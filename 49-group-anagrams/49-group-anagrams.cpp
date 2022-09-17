class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& str) {
        
        vector<vector<string>>ans;
        
        unordered_map<string,vector<string>>mp;
        
        for(int i=0;i<str.size();i++)
        {
            string s = str[i];
            sort(s.begin(),s.end());
            
            mp[s].push_back(str[i]);
            
        }
        
        for(auto it:mp)
        {
            ans.push_back(it.second);
        }
        
        return ans;
        
        
    }
};