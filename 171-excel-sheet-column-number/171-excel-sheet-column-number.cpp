class Solution {
public:
    int titleToNumber(string s) {
        // simple for every character make it push 26 times thats it
        
        
        int ans=0;
        
        for(auto it:s)
        {
            int d =  it-'A'+1; // Z-A+1 = 26-1+1 = 26 // B-A+1 = 2-1+1 = 2
            
            ans = ans*26 + d; 
            
        }
        
        return ans;
        
    }
};