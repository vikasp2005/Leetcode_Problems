class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        int count =1;
        if(n>=1) count+=9;

        int base=9;
        int option=9;
        for(int i=2;i<=n;i++)
        {
            base=base*option;
            count+=base;
            option--;
        }
        return count;
    }
};