class Solution {
public:
    int countElements(vector<int>& arr) {
        int count = 0;
        int maxSoFar = INT_MIN;

        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] > maxSoFar) {
                count++;
                maxSoFar = arr[i];
            }
        }

        return count;
    }
};
