class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int> m;
        for(auto i:s)
        {
            m[i]+=1;
        }
        int c=m[s[0]];
        for(auto i:m)
        {
            if(c!=i.second) return false;
        }
        return true;
    }
};