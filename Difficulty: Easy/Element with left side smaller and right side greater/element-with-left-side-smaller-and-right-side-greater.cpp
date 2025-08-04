class Solution {
public:
    int findElement(vector<int> &arr) {
        int n = arr.size();
        vector<int> leftMax(n), rightMin(n);

        // Step 1: Fill leftMax
        leftMax[0] = arr[0];
        for (int i = 1; i < n; i++) {
            leftMax[i] = max(leftMax[i - 1], arr[i]);
        }

        // Step 2: Fill rightMin
        rightMin[n - 1] = arr[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            rightMin[i] = min(rightMin[i + 1], arr[i]);
        }

        // Step 3: Find the required index
        for (int i = 1; i < n - 1; i++) {
            if (arr[i] == leftMax[i] && arr[i] == rightMin[i]) {
                return arr[i];
            }
        }

        return -1; // No such element
    }
};
