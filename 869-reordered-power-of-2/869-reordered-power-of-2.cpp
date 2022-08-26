class Solution {
public:
    bool reorderedPowerOf2(int n) {
      /*
        whatever number you have just sort it and check from 
        2^1 till 10000000 to check if it matches with the power or not
      
      */
        
        string s1 = to_string(n);
        
        sort(s1.begin(),s1.end());
        
        for(int i=0;pow(2,i)<1000000000;i++)
        {
            int num = pow(2,i);
            
            string s2 = to_string(num);
            
            sort(s2.begin(),s2.end());
            
            if(s1==s2){
                return true;
            }
        }
        
        return false;
        
        
        
    }
};