class Solution {
public:
    int findWays(int n) {
        if (n % 2 != 0) return 0;
        int m = n / 2;
        vector<long long> dp(m + 1, 0);
        dp[0] = 1;
        for (int i = 1; i <= m; i++) {
            for (int j = 0; j < i; j++) {
                dp[i] += dp[j] * dp[i - j - 1];
            }
        }
        return dp[m];
    }
};
