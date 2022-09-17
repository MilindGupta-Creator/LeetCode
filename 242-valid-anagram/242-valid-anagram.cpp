class Solution {
public:
    bool isAnagram(string s, string t) {
        
        int len1 = s.size();
        int len2 = t.size();
        
        if(len1!=len2){
            return false;
        }
        
//         sort(s.begin(),s.end());
//         sort(t.begin(),t.end());
        
//         if(s!=t){
//             return false;
//         }
        
//         return true;
        
        unordered_map<char,int>mp;
        
        for(int i=0;i<len1;i++)
        {
            mp[s[i]]++;
            mp[t[i]]--;
        }
        
        for(auto it:mp)
        {
            if(it.second>0){
                return false;
            }
        }
        
        return true;
        
        
        
    }
};