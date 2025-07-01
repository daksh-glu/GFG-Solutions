class Solution {
public:
    string reverseWithSpacesIntact(string s) {
        string ans = "";
        int n = s.length();
        int i;
        for (i = 0; i < n; i++) {
            if (s[i] != ' ') {
                ans += s[i];
            }
        }
        reverse(ans.begin(), ans.end());
        string res = "";
        int j = 0; 
        for (i = 0; i < n; i++) {
            if (s[i] == ' ') {
                res += ' ';
            } else {
                res += ans[j];
                j++;
            }
        }

        return res;
    }
};
