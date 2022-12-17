class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        
        /*
            its nothing but a postfix operation going on
            [2,1,+,3,*]
            stack = [ 2 , 1 , + comes now
            stack = [3 , 3 * comes now
            stack = [9]
        
        */
        long ans=0;
        
        stack<int>st;
        
        for(int i=0;i<tokens.size();i++)
        {
                if(tokens[i]=="+" || tokens[i]=="-" || tokens[i]=="*" || tokens[i]=="/")
                {
                    long a = st.top();
                    st.pop();
                    long b = st.top();
                    st.pop();
                    if(tokens[i]=="+")
                    {
                        st.push(a+b);
                    }
                    else if(tokens[i]=="-")
                    {
                        st.push(b-a);
                    }
                    else if(tokens[i]=="*")
                    {
                        st.push(b*a);
                    }
                    else if(tokens[i]=="/")
                    {
                        st.push(b/a);
                    }
                }
            else
            {
                st.push(stoi(tokens[i]));
            }
        }
        
        return st.top();
    }
};