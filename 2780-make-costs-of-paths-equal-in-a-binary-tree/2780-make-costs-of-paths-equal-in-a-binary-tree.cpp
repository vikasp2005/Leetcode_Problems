class Solution {
public:
    int minIncrements(int n, vector<int>& cost) {
        int res=0;
        for(int i=n/2-1;i>=0;i--)
        {
            int l=i*2+1,r=i*2+2;
            res+=abs(cost[l]-cost[r]);
            cost[i]+=max(cost[l],cost[r]);
        }
        return res;
    }
};