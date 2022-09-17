class Solution {
public:
    bool isAnagram(string s, string t) {
        
        int len1 = s.size();
        int len2 = t.size();
        
        if(len1!=len2){
            return false;
        }
        
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        
        if(s!=t){
            return false;
        }
        
        return true;
        
        
    }
};