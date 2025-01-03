class Solution {
public:
    string baseNeg2(int n) {
        if(n==0) return "0";
        string res="";
        while(n)
        {
            int r=n%2;
            n/=-2;
            if(r<0) r+=2,n+=1;
            res=to_string(r)+res;
        }
        return res;
    }
};