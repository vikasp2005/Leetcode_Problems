class Solution {
public:
    int arrangeCoins(int n) {
     int i=1;
     while(n>0)
     {
        n-=i;
        i++;
        if(n<0)
        {
            i--;
        }
     } 
     return i-1;  
    }
};