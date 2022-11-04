class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        map<string,int>mp,eq;
        int ans = 0;
        int n = words.size();
        for(int i = 0;i<n;i++)
        {
            string s = words[i];
            reverse(s.begin(),s.end());
            if(mp[words[i]]>0)
            {
                mp[words[i]]-=1;
                ans+=4;
            }
            else
            {
                mp[s]++;
            }
        }
        for(auto keys:mp)
        {
            if(keys.second==1)
            {
                string s =  keys.first;
                if(s[0]==s[1])
                {
                    ans+=2;
                    break;
                }
            }
        }
        return ans;
    }
};