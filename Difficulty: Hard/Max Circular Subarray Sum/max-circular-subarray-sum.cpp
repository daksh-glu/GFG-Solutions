class Solution {
public:
    int maxCircularSum(vector<int> &arr) {
        int n = arr.size();
        
        int maxKadane = arr[0];
        int maxEndingHere = arr[0];
        
        for (int i = 1; i < n; i++) {
            maxEndingHere = max(arr[i], maxEndingHere + arr[i]);
            maxKadane = max(maxKadane, maxEndingHere);
        }
        
        int minKadane = arr[0];
        int minEndingHere = arr[0];
        
        for (int i = 1; i < n; i++) {
            minEndingHere = min(arr[i], minEndingHere + arr[i]);
            minKadane = min(minKadane, minEndingHere);
        }
        
        int totalSum = 0;
        for (int i = 0; i < n; i++) {
            totalSum += arr[i];
        }
        
        if (totalSum == minKadane) {
            return maxKadane;
        }
        
        return max(maxKadane, totalSum - minKadane);
    }
};