class Solution {
public:
    string reverseWords(string s) {
        
        stringstream ss(s);
        
        string word;
        
        vector<string>ans;
        
        while(ss>>word)
        {
            ans.push_back(word);
        }
        
        reverse(ans.begin(),ans.end());
        
        string res;
        
        for(auto it:ans)
        {
            res+=(it); //blue
            res+=" ";//blue 
        }
        
        // blue is sky the
        
        res.pop_back();
        
        return res;
        
    }
};