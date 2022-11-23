class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        /*
            in example 2
            
            for board[0][0]
            in set following insertion happens
            
            st = [row 0 8 , col 0 8 , box 0 8] i.e. row is 0 and value is 8
            
            now again at baord[3][0]
            
            st = [row 0 8 , col 0 8 , box 0  , row 4 8 , col 0 8 , box 1 8]
            
            we see that col 0 8 comes again which is not possible and hence we return false
        
        
        */
        unordered_set<string>st;
        
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(board[i][j]!='.')
                {
                    string row = "row"+to_string(i)+board[i][j];
                    string col = "col"+to_string(j)+board[i][j];
                    string box = "box"+to_string((i/3)*3+(j/3))+board[i][j];
                    
                    if(st.find(row)==st.end() and st.find(col)==st.end() and st.find(box)==st.end())
                    {
                        st.insert(row);
                        st.insert(col);
                        st.insert(box);
                    }
                    else
                    {
                        return false;
                    }
                    
                }
            }
        }
        
        
        return true;
        
    }
};