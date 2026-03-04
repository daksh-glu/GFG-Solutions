class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int x) {
        int n = mat.size(), m = mat[0].size();
        int lo = 0, hi = n * m - 1;
        while (lo <= hi) {
            int mid = (lo + hi) / 2;
            int val = mat[mid / m][mid % m];
            if (val == x) return true;
            else if (val < x) lo = mid + 1;
            else hi = mid - 1;
        }
        return false;
    }
};