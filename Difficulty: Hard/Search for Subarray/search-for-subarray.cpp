class Solution {
  public:
    vector<int> search(vector<int> &a, vector<int> &b) {
        // code here
        vector<int> res;
        int n = a.size(), m = b.size();
        
        // Build KMP failure function for b
        vector<int> lps(m, 0);
        for (int i = 1, len = 0; i < m; ) {
            if (b[i] == b[len]) lps[i++] = ++len;
            else if (len) len = lps[len - 1];
            else lps[i++] = 0;
        }
        
        // KMP search
        for (int i = 0, j = 0; i < n; ) {
            if (a[i] == b[j]) { i++; j++; }
            if (j == m) {
                res.push_back(i - j);
                j = lps[j - 1];
            } else if (i < n && a[i] != b[j]) {
                if (j) j = lps[j - 1];
                else i++;
            }
        }
    return res;
        
    }
};