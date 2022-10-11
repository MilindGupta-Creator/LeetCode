class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        /*
        
        find the left minimum of the array and right maximum of the array
        and then simply doing minleft[i]<nums[i]<maxright[i]
        
        T.C = O(N)  and  S.C = O(2N)
        
        int n = nums.size();
        vector<int>minleft(n,0);
        minleft[0] = nums[0];
        for(int i=1;i<n;i++)
        {
            minleft[i] = min({nums[i-1],nums[i],minleft[i-1]});
        }
        
        vector<int>maxright(n,0);
        maxright[n-1] = nums[n-1];
        
        for(int i=n-2;i>=0;i--)
        {
            maxright[i] = max({maxright[i+1],nums[i]});
        }
        
        for(int i=0;i<n;i++)
        {
            if(minleft[i]<nums[i] and maxright[i]>nums[i])
            {
                return true;
            }
        }
        
        return false;
        for(int i=0;i<n;i++)
        {
            cout<<minleft[i]<<" ";
            
        }
        cout<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<maxright[i]<<" ";
            
        }
        return false;
        **/
        
//         Appraoch 3: we want this actually num1<num2<num3
            
//             we want num1 smaller than num3
        int num1=INT_MAX,num2=INT_MAX,num3=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            num3 = nums[i];
            if(num3<=num1)
            {
                num1=num3;
            }
            else if(num3<=num2)
            {
                num2=num3;
            }
            else
            {
                return true;
            }
        }
        
        return false;
        
        
        
    }
};