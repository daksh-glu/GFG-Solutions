class Solution {
public:
    int minSum(vector<int>& arr1, vector<int>& arr2) {
        int n = arr1.size();
        int min1 = INT_MAX, min2 = INT_MAX;
        int idx1 = -1, idx2 = -1;

        for (int i = 0; i < n; i++) {
            if (arr1[i] < min1) {
                min1 = arr1[i];
                idx1 = i;
            }
        }
        for (int i = 0; i < n; i++) {
            if (arr2[i] < min2) {
                min2 = arr2[i];
                idx2 = i;
            }
        }

        if (idx1 != idx2)
            return min1 + min2;
        int secondMin1 = INT_MAX;
        int secondMin2 = INT_MAX;

        for (int i = 0; i < n; i++) {
            if (i != idx2) {
                secondMin1 = min(secondMin1, arr1[i]);
            }
            if (i != idx1) {
                secondMin2 = min(secondMin2, arr2[i]);
            }
        }

        return min(min1 + secondMin2, secondMin1 + min2);
    }
};
