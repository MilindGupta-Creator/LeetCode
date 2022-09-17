class Solution {
public:
    bool canConstruct(string a, string b) {
        
        unordered_map<char,int>mp;
        
        for(auto it:b)
        {
            mp[it]++;
        }
        
        for(int i=0;i<a.size();i++)
        {
            if(mp[a[i]]==0){
                return false;
            }
            
            mp[a[i]]--;
            
        }
        
        
        return true;
        
    }
};