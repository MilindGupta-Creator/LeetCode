class Solution {
public:
    bool checkIfPangram(string s) {
        
        int t[26]={0};
        
        for(int i=0;i<s.size();i++)
        {
            t[s[i]-'a']++;
        }
        
        for(int i=0;i<26;i++)
        {
            if(t[i]==0){
                return false;
            }
        }
        
        return true;
        
        
    }
};