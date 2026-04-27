class Solution {
public:
    int smallestSubstring(string s) {
        int cnt[3] = {0, 0, 0};
        int have = 0, res = INT_MAX;
        int l = 0;
        for (int r = 0; r < s.size(); r++) {
            int c = s[r] - '0';
            cnt[c]++;
            if (cnt[c] == 1) have++;
            while (have == 3) {
                res = min(res, r - l + 1);
                int lc = s[l] - '0';
                cnt[lc]--;
                if (cnt[lc] == 0) have--;
                l++;
            }
        }
        return res == INT_MAX ? -1 : res;
    }
};