class Solution {
public:
    
    bool search(vector<vector<char>>& board , int i , int j , string& word , int idx)
    {
        if(idx==word.size()-1)return true;
        board[i][j]-=65;
        if(i>0 and board[i-1][j] == word[idx+1] and search(board,i-1,j,word,idx+1) )
        {
            return true;
        }
        if(j>0 and board[i][j-1] == word[idx+1] and search(board,i,j-1,word,idx+1) )
        {
            return true;
        }
        
         if(i<board.size()-1 and board[i+1][j] == word[idx+1] and search(board,i+1,j,word,idx+1) )
        {
            return true;
        }
        if(j<board[0].size()-1 and board[i][j+1] == word[idx+1] and search(board,i,j+1,word,idx+1) )
        {
            return true;
        }
        board[i][j]+=65;
        return false;
        
    }
    
    bool exist(vector<vector<char>>& board, string word) {
        int row = board.size();
        int col = board[0].size();
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(board[i][j]==word[0] and search(board,i,j,word,0))
                {
                    return true;
                }
            }
        }
        return false;
    }
};