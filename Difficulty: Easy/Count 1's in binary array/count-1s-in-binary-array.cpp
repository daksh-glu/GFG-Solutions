class Solution {
public:
    int countOnes(vector<int>& arr) {
        int lo = 0, hi = arr.size() - 1;
        while (lo <= hi) {
            int mid = (lo + hi) / 2;
            if (arr[mid] == 1) lo = mid + 1;
            else hi = mid - 1;
        }
        return lo;
    }
};