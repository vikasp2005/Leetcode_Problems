class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        sort(strs.begin(),strs.end());
        string f=strs[0];
        string l=strs[strs.size()-1];
        for(int i=0;i<fmax(f.length(),l.length());i++)
        {
            if(f[i]!=l[i])
            {
                return ans;
            }
            ans+=f[i];
        }
        return ans;
    }
};