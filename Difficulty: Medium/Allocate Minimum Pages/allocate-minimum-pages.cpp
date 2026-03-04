class Solution {
public:
    bool canAllocate(vector<int>& arr, int k, long long mid) {
        int students = 1; long long pages = 0;
        for (int x : arr) {
            if (x > mid) return false;
            if (pages + x > mid) { students++; pages = x; }
            else pages += x;
        }
        return students <= k;
    }
    int findPages(vector<int>& arr, int k) {
        if (k > arr.size()) return -1;
        long long lo = *max_element(arr.begin(), arr.end());
        long long hi = accumulate(arr.begin(), arr.end(), 0LL);
        int res = -1;
        while (lo <= hi) {
            long long mid = (lo + hi) / 2;
            if (canAllocate(arr, k, mid)) { res = mid; hi = mid - 1; }
            else lo = mid + 1;
        }
        return res;
    }
};