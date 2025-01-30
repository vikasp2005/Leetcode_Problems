class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int tg=0,tc=0;
        for(int i=0;i<gas.size();i++)
        {
            tg+=gas[i];
            tc+=cost[i];
        }
        if(tg<tc) return -1;

        int cg=0,s=0;
        for(int i=0;i<gas.size();i++)
        {
            cg+=gas[i]-cost[i];
            if(cg<0)
            {
                cg=0;
                s=i+1;
            }
        }
        return s;
    }
};