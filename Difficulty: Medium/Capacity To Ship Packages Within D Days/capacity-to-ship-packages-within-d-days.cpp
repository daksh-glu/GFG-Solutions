class Solution {
public:
    int leastWeightCapacity(int arr[], int n, int d) {
        int low = *max_element(arr, arr + n);
        int high = accumulate(arr, arr + n, 0);
        int ans = high;
        
        while (low <= high) {
            int mid = low + (high - low) / 2;
            
            int days = 1;
            int currentWeight = 0;
            
            for (int i = 0; i < n; i++) {
                if (currentWeight + arr[i] > mid) {
                    days++;
                    currentWeight = arr[i];
                } else {
                    currentWeight += arr[i];
                }
            }
            
            if (days <= d) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        
        return ans;
    }
};