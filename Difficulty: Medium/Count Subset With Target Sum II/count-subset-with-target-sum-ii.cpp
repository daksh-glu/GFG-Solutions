class Solution {
public:
    int countSubset(vector<int>& arr, int k) {
        int n = arr.size();
        int n1 = n / 2;
        int n2 = n - n1;
        vector<long long> a(arr.begin(), arr.begin() + n1);
        vector<long long> b(arr.begin() + n1, arr.end());
        unordered_map<long long, int> mp;
        int m1 = 1 << n1;
        for (int mask = 0; mask < m1; mask++) {
            long long sum = 0;
            for (int i = 0; i < n1; i++) {
                if (mask & (1 << i)) sum += a[i];
            }
            mp[sum]++;
        }
        int ans = 0;
        int m2 = 1 << n2;
        for (int mask = 0; mask < m2; mask++) {
            long long sum = 0;
            for (int i = 0; i < n2; i++) {
                if (mask & (1 << i)) sum += b[i];
            }
            if (mp.count(k - sum)) ans += mp[k - sum];
        }
        return ans;
    }
};
