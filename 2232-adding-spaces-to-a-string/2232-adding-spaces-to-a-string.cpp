class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string res="";
        int j=0;
        if(spaces[0]==0){
            res+=" ";
            j++;
        }
        if(j==spaces.size()) j=-1;

        for(int i=0;i<s.length();i++)
        {
            res+=s[i];
            if(j!=-1&& spaces[j]==i+1){ 
                res+=" ";
                j++;
            }
            if(j==spaces.size()) j=-1;
            
        }
        return res;
    }
};