class Solution {
public:
    string convertToBase7(int num) {
        int f=0;
        if(num<0) 
        {
            num*=-1;
            f=1;
        }
        string s="";
        if(num==0) s="0";
        while(num)
        {
            s=to_string(num%7)+s;
            num/=7;
        }
        if(f) s="-"+s;
        return s;
    }
};