class Solution {
public:
   
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int r=obstacleGrid.size();
        int c=obstacleGrid[0].size();
        vector<int> dp(c,0);
        dp[0]=1;

        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(obstacleGrid[i][j]==1) dp[j]=0;

                else if(j>0) dp[j]+=dp[j-1];
            }
        }
        return dp[c-1];
    }
};