class Solution {
public:
    int distanceTraveled(int mainTank, int additionalTank) {
        int dis=0;
        while(mainTank>=5&&additionalTank>0)
        {
            mainTank=mainTank-5;
            if(additionalTank>0)
            {
                mainTank+=1;
                additionalTank-=1;
            }
            dis+=50;
        }
        dis+=(mainTank*10);
        return dis;
    }
};