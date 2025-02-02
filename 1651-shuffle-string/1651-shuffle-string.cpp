class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        vector<char> str(s.length(),' ');
        string res="";
        for(int i=0;i<s.length();i++)
        {
            str[indices[i]]=s[i];

        }
        for(auto c:str)
        {
            res+=c;
        }
        return res;
    }
};