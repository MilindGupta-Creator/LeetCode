class Solution {
public:
    int minAddToMakeValid(string s) {
        
        int open = 0;
        int extra = 0;
        
        
        for(auto it:s)
        {
            if(it=='(')
            {
                open++;
            }
            else
            {
                if(open>0)
                {
                    open--;
                }
                else
                {
                    extra++;
                }
            }
        }
        
        return (open+extra);
        
    }
};