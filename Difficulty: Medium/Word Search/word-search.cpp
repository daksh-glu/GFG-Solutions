class Solution {
public:
    bool isWordExist(vector<vector<char>>& mat, string &word) {
        int n = mat.size();
        int m = mat[0].size();
        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(mat[i][j] == word[0]) {
                    vector<vector<bool>> visited(n, vector<bool>(m, false));
                    if(dfs(mat, word, i, j, 0, visited)) {
                        return true;
                    }
                }
            }
        }
        return false;
    }
    
private:
    bool dfs(vector<vector<char>>& mat, string& word, int i, int j, int idx, vector<vector<bool>>& visited) {
        if(idx == word.length()) {
            return true;
        }
        
        int n = mat.size();
        int m = mat[0].size();
        
        if(i < 0 || i >= n || j < 0 || j >= m || visited[i][j] || mat[i][j] != word[idx]) {
            return false;
        }
        
        visited[i][j] = true;
        
        int dx[] = {-1, 1, 0, 0};
        int dy[] = {0, 0, -1, 1};
        
        for(int k = 0; k < 4; k++) {
            int ni = i + dx[k];
            int nj = j + dy[k];
            if(dfs(mat, word, ni, nj, idx + 1, visited)) {
                return true;
            }
        }
        
        visited[i][j] = false;
        return false;
    }
};