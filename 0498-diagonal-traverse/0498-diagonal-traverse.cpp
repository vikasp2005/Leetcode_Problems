class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        vector<int> ans;
        int i=0,j=0;
        int m = mat.size();
        int n = mat[0].size();

        while(true){

            while(true){
                ans.push_back(mat[i][j]);
                if(i == 0 || j == n-1) break;
                i--;
                j++;
            }

            if(i == m-1 && j == n-1) break;
            if(j < n-1) j++;
            else i++;

            while(true){
                ans.push_back(mat[i][j]);
                if(i == m-1 || j == 0) break;
                i++;
                j--;
            }

            if(i == m-1 && j == n-1) break;
            if(i < m-1) i++;
            else j++;
        }

        return ans;
    }
};