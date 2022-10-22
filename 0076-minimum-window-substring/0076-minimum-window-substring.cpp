class Solution {
public:
    string minWindow(string s, string t) {
        /*
        For Solving this question we are going use acquire and release strategy and the i represents for acquiring elements in map1 and j represents releasing element from map1,
        
        while traversing we need a count here that stores how many numbers of the same character we got that are present into both of the strings so, for that we are taking one matchCount is 0 for the first time,
        
        while traversing over the string one the first character we got is the a and it is also present in the string two / map2 and we got our first match so we are going to increase the matchCount by 1,
        
        */
        string ans="";
        
        unordered_map<char,int>mp2; // mapping characters of string t
        
        for(auto it:t)
        {
            mp2[it]++;
        }
        
        int matchCnt=0;
        int desiredMatchCnt = t.size(); // t size ka length hume chahiye
        
        unordered_map<char,int>mp1; // For frequency of characters of string s
        
        int i=0,j=0;
        
        while(true)
        {
            bool flag1=false,flag2=false;
            
            // start acquiring the characters one by one in our mp1
            // and check like the map count is correct or not in both the maps for
            // all the characters
            while(i<s.size() and matchCnt < desiredMatchCnt)
            {
                mp1[s[i]]++;
                if(mp1[s[i]]<=mp2[s[i]]){
                    matchCnt++;
                }
                i++;
                flag1=true;
            }
            
            // store ans and keep it on releasing 
            // sliding window fashion j is at first idx where as i is somewhere 
            // where we have matched our first matching point
            while((j<i) and matchCnt == desiredMatchCnt)
            {
                string possibleAns = s.substr(j,i-j);
                
                if(ans.size()==0){ // at first case in starting ans will be zero 
                    ans = possibleAns;
                }
                if(possibleAns.size() < ans.size()){ // storing the ans
                    ans = possibleAns;
                }
                
                if(mp1[s[j]]==1){
                    mp1.erase(s[j]);
                }else{
                    mp1[s[j]]--;
                }
                
                if(mp1[s[j]]<mp2[s[j]])  // If the released character is matched, decreased the count
                    matchCnt--;
                
                flag2=true;
                j++;
                
                
            }
            
            if(flag1==false and flag2==false) // to come out of the loop we need to use this
                break;
            
        }
        
        return ans;
        
        
    }
};