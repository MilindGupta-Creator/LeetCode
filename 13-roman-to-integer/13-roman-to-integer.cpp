class Solution {
public:
    int romanToInt(string s) {
        
        unordered_map<char,int>mp={
            {'I',1},
            {'V',5},
            {'X',10},
            {'L',50},
            {'C',100},
            {'D',500},
            {'M',1000},};
        
        int sum=0;
        
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='V' || s[i]=='X'){
                if(i>0 and s[i-1]=='I'){
                    sum-=2;
                }
            }
            if(s[i]=='L' || s[i]=='C'){
                if(i>0 and s[i-1]=='X'){
                    sum-=20;
                }
            }
            
            if(s[i]=='D' || s[i]=='M'){
                if(i>0 and s[i-1]=='C'){
                    sum-=200;
                }
            }
            
            
            sum+=mp[s[i]]; // s[i]=c
            
        }
        
        return sum;
        
        
    }
};