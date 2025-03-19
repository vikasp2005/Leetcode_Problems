class Solution {
public:
    int scoreOfString(string s) {
        int n=s.length();
        int res=0;
        for(int i=0;i<n-1;i++)
        {
            res+=(abs((s[i]-96)-(s[i+1]-96)));
        
        }
        return res;
    }
};