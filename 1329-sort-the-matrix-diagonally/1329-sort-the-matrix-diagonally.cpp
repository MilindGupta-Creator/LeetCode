class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        /*
        APPROACH

First traverse all diagonals that start from left side.

Diagonals with first element as mat[ 0 ] [ j ]
Then traverse diaonals that start from the top.

Diagonals with first element as mat[ i ] [ 0 ]
Sort the elements by any means that seems best and then replace those elements.
        
        
        
        */
        vector<int> k;
        int m = mat.size() , n = mat[0].size();
        for (int r=0; r<m; r++)  // r-> row
        {
            k.clear();
            for (int j=0,i=r; j<n &&i<m ; j++,i++) k.push_back(mat[i][j]);//add to vector
            sort(k.begin(),k.end());
            for (int j=0,i=r; j<n && i<m ; j++,i++) mat[i][j]=k[j];    // replace
        }
        
        for (int c=1; c<n; c++) // c->column
        {
            k.clear();
            for (int i=0, j=c; j<n && i<m; i++, j++) k.push_back(mat[i][j]);   // add to vector
            sort(k.begin(),k.end());
            for (int i=0, j=c; j<n && i<m; i++, j++) mat[i][j] = k[i]; //replace
        }
        return mat;
        
    }
};