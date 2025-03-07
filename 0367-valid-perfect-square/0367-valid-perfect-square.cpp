class Solution {
public:
    bool isPerfectSquare(int num) {
       long l=1,r=num/2;
       while(l<r)
       {
        long mid=l+(r-l)/2;
        if((mid*mid)<num){
            l=mid+1;
        }
        else{
            r=mid;
        }
       }
       return l*l==num; 
    }
};