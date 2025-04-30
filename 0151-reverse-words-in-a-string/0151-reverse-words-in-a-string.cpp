class Solution {
public:
    string reverseWords(string s) {
        int i=0,j=0;
        string words[10000];
        while(s[i]!='\0')
        {
            if(s[i]!=' ')
            {
                while(s[i]!=' '&&s[i]!='\0')
                {
                    words[j]+=s[i];
                    i++;
                }
                j++;
            }
            else{
                i++;
            }
        }
        string res="";
        for(int k=j-1;k>=0;k--)
        {
            res+=words[k];
            if(k>0) res+=" ";
        }
        return res;
    }
};