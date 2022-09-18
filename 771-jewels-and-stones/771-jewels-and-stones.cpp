class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        
        unordered_map<int,int>mp;
        
        for(auto it:jewels)
        {
            mp[it]++;
        }
        
        int cnt=0;
        
        for(auto it:stones)
        {
            if(mp[it]>=1)
            {
                cnt++;
            }
        }
        
        return cnt;
        
    }
};