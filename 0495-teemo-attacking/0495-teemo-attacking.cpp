class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int n=timeSeries.size();
        if(n==0)
        {
                return 0;
        }
        int ans=0;
        for(int i=0;i<n-1;i++)
        {
            ans=ans+min(duration,timeSeries[i+1]-timeSeries[i]);
        }
        ans+=duration;
        return ans;
    }
};