class Solution {
public:
    vector<int> firstAndLast(int x, vector<int>& arr) {
        int first = lower_bound(arr.begin(), arr.end(), x) - arr.begin();
        if (first == arr.size() || arr[first] != x) return {-1};
        int last = upper_bound(arr.begin(), arr.end(), x) - arr.begin() - 1;
        return {first, last};
    }
};