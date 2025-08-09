

class Solution {
  public:
    // Function to calculate the difference between the maximum element in the array and
    // a given number k
    int required(vector<int>& arr, int k) {
        // Your code goes here
        int maxDist = *max_element(arr.begin(), arr.end());
        if (k >= maxDist) return -1;
        return maxDist - k;
    }
};