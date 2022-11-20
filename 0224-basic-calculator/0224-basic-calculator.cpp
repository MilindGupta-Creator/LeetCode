class Solution {
public:
    int calculate(string s) {
        int sum=0;
        int sign=1;
   //     cout<<s.size();
        stack<int>st;
        int n = s.size();
        for(int i=0;i<s.size();i++)
        {
            char ch = s[i];
            
            if(isdigit(ch)) // suppose s = 3124 + first extract 3124 and stops at + sign
            {
                int val = 0;
                while(i<n and isdigit(s[i]))
                {
                    val = val*10 + (s[i]-'0');
                    i++; //  the i comes at sign now after while loop
                }
                i--; // with this we bring back i to number 4
                
                val = val*sign;
                sum+=val;
                sign=1;
            }
            else if(ch=='(') // 347-(-8+5) // put the sum till before bracket that is 347 and sign too that is - 
            {
                st.push(sum);
                st.push(sign);
                sum=0;
                sign=+1;
            }
            else if(ch==')') // closing bracket main hume stack se baahar nikalke merge krr dena hota 
            {
                sum*=st.top(); // sign se multiply krr diya
                st.pop();
                sum+=st.top(); // sum main add krr diya prev
                st.pop();
            }
            else if(ch=='-')
            {
                sign*=-1;
            }
            
        }
        
        return sum;
    }
};