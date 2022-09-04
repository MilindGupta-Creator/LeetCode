class Solution {
public:
    string shiftingLetters(string s, vector<int>& shift) {
           int sum=0;
        
        for(int i=shift.size()-1;i>=0;i--)
        {
            sum+=shift[i]%26;
            s[i] = 'a'+(s[i]-'a'+sum)%26; // we need to check by ourselves like
                                          // modifying what we get this
        }
        
        return s;
    }
};