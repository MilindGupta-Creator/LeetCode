class Solution {
public:
    string pushDominoes(string dominoes) {
        
        /*
            Approach
Maitain 2 array, one for only left push operation and the other one for only right push operation.

In array named left, Store the number of second it took for i-th domino to fall if only left push was performed ( ignoring all the right push operations )

Similary in right named array, Store the number of second it took for i-th domino to fall if only right push was performed ( ignore left push operations ).

Traverse both the array simultaneously and for every domino i, check which operation will make it fall earlier ( left push or right push ).

If both operation takes equal amount of time, that domino will remain as it was orginally.

Note : Initially we will assume that it would take infinite time ( int_max ) to for i-th domino to fall
        
        */
        
        int n=dominoes.size();
        vector<int> left(n,INT_MAX),right(n,INT_MAX);
        int cnt=-1;
        for(int i=0;i<n;i++){
            if(dominoes[i]=='R') cnt=1;
            else if(dominoes[i]=='L') cnt=-1;
            else if(cnt!=-1) right[i]=cnt++;
        }
        cnt=-1;
        for(int i=n-1;i>=0;i--){
            if(dominoes[i]=='L') cnt=1;
            else if(dominoes[i]=='R') cnt=-1;
            else if(cnt!=-1) left[i]=cnt++;
        }
        string ans;
        for(int i=0;i<n;i++){
            if(left[i]>right[i]) ans+='R';
            else if(right[i]>left[i]) ans+='L';
            else ans+=dominoes[i];
        }
        return ans;
    }
};