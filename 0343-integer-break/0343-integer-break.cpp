class Solution {
public:
    int integerBreak(int n) {
        if (n<=3) return n-1;

        int three=n/3;
        int remainder=n%3;

        if(remainder==1)
        {
            three-=1;
            remainder=4;
        }
        else if(remainder==0) remainder=1;

        return (pow(3,three))*remainder;
    }
};