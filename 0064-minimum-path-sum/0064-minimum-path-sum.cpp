class Solution {
public:
    int help(int i,int j,int m,int n,vector<vector<int>>& dp,vector<vector<int>>& grid)
    {
        if(i>=m || j>=n) return INT_MAX;
        if(i==m-1 && j==n-1) return grid[i][j];
        if(dp[i][j]!=-1) return dp[i][j];

        int r=help(i,j+1,m,n,dp,grid);
        int d=help(i+1,j,m,n,dp,grid);
        dp[i][j]=r>d?d:r;
        dp[i][j]+=grid[i][j];
        return dp[i][j];
    }
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
        return help(0,0,m,n,dp,grid);
    }
};