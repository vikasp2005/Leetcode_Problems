class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int max=candyType.size()/2;

        unordered_set<int>st;

        for(int &i:candyType)
        {
            if(st.size()==max) return st.size();
            st.insert(i);
        }
        return st.size();

    }
};