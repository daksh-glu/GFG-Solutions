class Solution {
public:
    vector<int> productExceptSelf(vector<int>& arr) {
        int n = arr.size();
        vector<int> left(n, 1), right(n, 1), res(n);

        // Fill left[]
        for (int i = 1; i < n; i++) {
            left[i] = left[i - 1] * arr[i - 1];
        }

        // Fill right[]
        for (int i = n - 2; i >= 0; i--) {
            right[i] = right[i + 1] * arr[i + 1];
        }

        // Construct result from left[] and right[]
        for (int i = 0; i < n; i++) {
            res[i] = left[i] * right[i];
        }

        return res;
    }
};
