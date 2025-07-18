class Solution {
public:
    int calculateFriendliness(vector<int>& arr) {
        int n = arr.size();
        int sum = 0;

        for (int i = 0; i < n; ++i) {
            int next = arr[(i + 1) % n]; // Circular next
            sum += abs(arr[i] - next);   // Only one direction
        }

        return sum;
    }
};
