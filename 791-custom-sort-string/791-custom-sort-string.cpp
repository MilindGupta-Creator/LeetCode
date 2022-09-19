class Solution {
public:
    string customSortString(string order, string s) {
        string s1,s2;
        
        int arr[26]={0};
        
        
        for(auto it:order)
        {
            arr[it-'a']++;
        }
        
        for(auto it:s)
        {
            if(arr[it-'a']==0)
            {
                s2+=it;
            }else{
                arr[it-'a']++;
            }
            
        }
        
        for(auto it:order)
        {
            while(arr[it-'a']>1)
            {
                s1+=it;
                arr[it-'a']--;
            }
        }
        
     return s1+s2;   
        
    }
};