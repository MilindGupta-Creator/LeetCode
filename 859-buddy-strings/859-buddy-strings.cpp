class Solution {
public:
    bool buddyStrings(string s, string t) {
        
        if(s.size()!=t.size()){
            return false;
        }
        
        if(s==t and set<char>(s.begin(),s.end()).size()<s.size()){
            return true;
        }
        
        vector<int>diff;
        int cnt=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=t[i])
            {
                cnt++;
                diff.push_back(i);
            }
            
            if(cnt>2){
                return false;
            }
        }
        
        
        return diff.size()==2 and s[diff[0]]==t[diff[1]] and s[diff[1]]==t[diff[0]];
        
        
    }
};