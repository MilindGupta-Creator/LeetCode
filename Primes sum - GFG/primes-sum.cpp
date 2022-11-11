//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
public:

    bool isprime(int n)
    {
        for(int i=2;i<=sqrt(n);i++)
        {
            if(n%i==0){
                return false;
            }
        }
        
        return true;
    }
    
    string isSumOfTwo(int n){
        // code here
        // 34 will be a sum of two prime like this check if 
        // 3 and (34-3) = 3 and 31 are prime so ans is yes
        // similarly for 23 = 2 and 23-2 so check is 2 and 21 are prime no
        // 21 is not prime so we will take next prime now
        // 3 and 23-3 = 3 and 20 not prime
        // 5 and 23-5 similarly we will check for others too
        
        
        for(int i=2;i<=n/2;i++)
        {
            if(isprime(n-i) and isprime(i))
            {
                return "Yes";
            }
        }
        return "No";
        
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isSumOfTwo(N) << endl;
    }
    return 0;
}

// } Driver Code Ends