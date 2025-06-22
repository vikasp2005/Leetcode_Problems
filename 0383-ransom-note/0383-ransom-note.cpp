class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> hash;

        for(char c:magazine)
        {
            hash[c]++;
        }
        for(char c: ransomNote)
        {
            if(hash[c]<=0){
                return false;
            }
            hash[c]--;
        }
        return true;
    }
};