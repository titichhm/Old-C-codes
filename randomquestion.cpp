class Solution {
public:
    int uniquePaths(int m, int n) {
        int pos[n+1][m+1];
        memset(pos,0,sizeof(pos));
        pos[0][0]=1;
        
        for(int i=1;i<=m;i++)
            pos[0][i]=1;
        for(int i=1;i<=n;i++)
            pos[i][0]=1;
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                pos[i][j]=pos[i][j-1]+pos[i-1][j];
            }
        }
        return pos[n][m];
    }
};
