class Solution {
public:
    int help(int x,int y,int m,int n,vector<vector<int>>& dp)
    {
        if(x==m-1&&y==n-1)
        {
            return 1;
        }
        if(x>=m || y>=n) return 0;

        if (dp[x][y]!=-1) return dp[x][y];

        return dp[x][y]=help(x+1,y,m,n,dp)+help(x,y+1,m,n,dp);
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
        return help(0,0,m,n,dp);
    }
};