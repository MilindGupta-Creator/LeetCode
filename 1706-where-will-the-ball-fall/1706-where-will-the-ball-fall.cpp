class Solution {
public:
    
    int dfs(int i , int j  , vector<vector<int>>&grid)
    {
        int row = grid.size();
        int col = grid[0].size();
        
        if(i==row){
            return j; // reach the end row and the end row ans is a col
        }
        
        if(grid[i][j]==1 and j+1<col and grid[i][j+1]==1)
        {
            return dfs(i+1,j+1,grid);
        }
        if(grid[i][j]==-1 and j-1>=0 and grid[i][j-1]==-1)
        {
            return dfs(i+1,j-1,grid);
        }
        
        return -1;
        
        
    }
    
    vector<int> findBall(vector<vector<int>>& grid) {
        int n = grid[0].size();
        vector<int>v(n,-1); // it will be actually the number of columns as ans
        
        
        
        for(int i=0;i<n;i++)
        {
            v[i] = dfs(0,i,grid);
        }
        
        return v;
    }
};