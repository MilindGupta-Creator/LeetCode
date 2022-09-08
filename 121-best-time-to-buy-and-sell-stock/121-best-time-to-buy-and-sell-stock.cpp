class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int chhota = INT_MAX;
        int large = INT_MIN;
        
        for(int i=0;i<prices.size();i++)
        {
            chhota = min(prices[i],chhota);
            large = max(large,prices[i]-chhota);
        }
        
        return large;
    }
};