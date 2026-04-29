class Solution {
public:
    int minSwaps(vector<int>& arr) {
        int ones = count(arr.begin(), arr.end(), 1);
        if (ones == 0) return -1;
        int n = arr.size();
        int zerosInWindow = 0;
        for (int i = 0; i < ones; i++)
            if (arr[i] == 0) zerosInWindow++;
        int minZeros = zerosInWindow;
        for (int i = ones; i < n; i++) {
            if (arr[i] == 0) zerosInWindow++;
            if (arr[i - ones] == 0) zerosInWindow--;
            minZeros = min(minZeros, zerosInWindow);
        }
        return minZeros;
    }
};