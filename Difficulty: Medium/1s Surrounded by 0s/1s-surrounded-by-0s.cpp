class Solution {
private:
    void dfs(int r, int c, vector<vector<int>>& grid, int n, int m) {
        if (r < 0 || r >= n || c < 0 || c >= m || grid[r][c] != 1) {
            return;
        }
        
        grid[r][c] = 2;
        
        dfs(r - 1, c, grid, n, m);
        dfs(r + 1, c, grid, n, m);
        dfs(r, c - 1, grid, n, m);
        dfs(r, c + 1, grid, n, m);
    }

public:
    int cntOnes(vector<vector<int>>& grid) {
        int n = grid.size();
        if (n == 0) return 0;
        int m = grid[0].size();
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (i == 0 || i == n - 1 || j == 0 || j == m - 1) {
                    if (grid[i][j] == 1) {
                        dfs(i, j, grid, n, m);
                    }
                }
            }
        }
        
        int trappedCount = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1) {
                    trappedCount++;
                }
                else if (grid[i][j] == 2) {
                    grid[i][j] = 1;
                }
            }
        }
        
        return trappedCount;
    }
};