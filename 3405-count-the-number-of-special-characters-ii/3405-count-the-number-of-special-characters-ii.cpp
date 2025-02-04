class Solution {
public:
    int numberOfSpecialChars(string word) {
        int lower[26]={0},upper[26]={0};

        for(auto c:word)
        {
            if(islower(c)) {
                if(upper[c-'a']==0&&upper[c-'a']!=-1){
                    lower[c-'a']=1;
                }
                else
                {
                    lower[c-'a']=0;
                }
            }
            if(isupper(c))
            {
                if(lower[c-'A']) upper[c-'A']=1;
                else upper[c-'A']=-1;
            }
        }
        int count=0;
        for(int i=0;i<26;i++)
        {
            if(lower[i]&&upper[i]) {
                count++;
            }
        }
        return count;
    }
};