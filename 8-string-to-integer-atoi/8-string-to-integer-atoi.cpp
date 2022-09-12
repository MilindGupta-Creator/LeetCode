class Solution {
public:
    int myAtoi(string s) {
        
        int sign=1;
        int i=0;
        int n = s.size();
        long long int ans=0;
        
        while(s[i]==' ')
        {
            i++;
        }
        
        if(s[i]=='-')
        {
            sign=-1;
            i++;
        }
        else if(s[i]=='+'){
            sign=1;
            i++;
        }
        
        
        
        
        while(i<n and s[i]>='0' and s[i]<='9')
        {
            ans = ans*10 + s[i]-'0';
            if(ans>INT_MAX || ans<INT_MIN)
            {
                return sign==1?INT_MAX:INT_MIN;
            }
            
            i++;
        }
        
        if(sign==-1){
            return -1*ans;
        }
        return ans;
        
        
    }
};