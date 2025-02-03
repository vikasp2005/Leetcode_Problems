class Solution {
public:
    void group(vector<vector<int>>& isConnected, int v, vector<bool>& visited) {
        visited[v] = true;

        for (int i = 0; i < isConnected.size(); i++) {
            if (!visited[i] && isConnected[v][i] == 1) group(isConnected, i, visited);
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        vector<bool> visited(isConnected.size(), false);
        int count = 0;
        for (int i = 0; i < isConnected.size(); i++) {
            if (!visited[i]) {
                group(isConnected, i, visited);
                count++;
            }
        }
        return count;
    }
};