class Solution {
public:
    bool canPaint(vector<int>& arr, int k, long long mid) {
        int painters = 1; long long time = 0;
        for (int x : arr) {
            if (x > mid) return false;
            if (time + x > mid) { painters++; time = x; }
            else time += x;
        }
        return painters <= k;
    }
    int minTime(vector<int>& arr, int k) {
        long long lo = *max_element(arr.begin(), arr.end());
        long long hi = accumulate(arr.begin(), arr.end(), 0LL);
        int res = hi;
        while (lo <= hi) {
            long long mid = (lo + hi) / 2;
            if (canPaint(arr, k, mid)) { res = mid; hi = mid - 1; }
            else lo = mid + 1;
        }
        return res;
    }
};