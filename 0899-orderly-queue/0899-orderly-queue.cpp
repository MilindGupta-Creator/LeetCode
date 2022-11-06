class Solution {
public:
    string orderlyQueue(string s, int k) {
        /*
            if k>1 whatever the string we chose we will find and observe that the string is always going to be in sorted condition
            
            for k==1 we just need to check for every length 
            of the string which is greater right now
            
            ex: s = "cba" k=1
            
            form two string s+s = cbacba now scan for every n=3 that which is greater here            
        */
        
        if(k==1)
        {
            string doublestr = s+s;
            string ans=s;
            int n = s.size();
            for(int i=1;i<n;i++)
            {
                string str = doublestr.substr(i,n);
                
                if(str<ans){
                    ans = str;
                }
                
            }
            
            return ans;
            
        }
        
        sort(s.begin(),s.end());
        
        return s;
        
        
    }
};