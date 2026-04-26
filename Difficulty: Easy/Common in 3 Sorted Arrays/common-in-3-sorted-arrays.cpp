class Solution {
  public:
    vector<int> commonElements(vector<int> &a, vector<int> &b, vector<int> &c) {
        // code here
        vector<int> res;
        int i = 0, j = 0, k = 0;
        while (i < a.size() && j < b.size() && k < c.size()) {
            if (a[i] == b[j] && b[j] == c[k]) {
                res.push_back(a[i]);
                while (i + 1 < a.size() && a[i] == a[i+1]) i++;
                while (j + 1 < b.size() && b[j] == b[j+1]) j++;
                while (k + 1 < c.size() && c[k] == c[k+1]) k++;
                i++; j++; k++;
            } else if (a[i] <= b[j] && a[i] <= c[k]) i++;
            else if (b[j] <= a[i] && b[j] <= c[k]) j++;
            else k++;
        }
        return res;
    }
};