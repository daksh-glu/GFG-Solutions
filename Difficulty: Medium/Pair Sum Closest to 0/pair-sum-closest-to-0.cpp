class Solution {
public:
    int closestToZero(int arr[], int n) {
        sort(arr, arr + n);
        int lo = 0, hi = n - 1;
        int res = INT_MAX, ans = INT_MAX;
        while (lo < hi) {
            int sum = arr[lo] + arr[hi];
            if (abs(sum) < abs(res) || (abs(sum) == abs(res) && sum > res)) {
                res = sum;
            }
            if (sum < 0) lo++;
            else hi--;
        }
        return res;
    }
};