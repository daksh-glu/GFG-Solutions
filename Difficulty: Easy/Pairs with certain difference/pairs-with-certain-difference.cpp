class Solution {
  public:
    int sumDiffPairs(vector<int>& arr, int k) {
        // code here
        sort(arr.begin(), arr.end(), greater<int>());
        int sum = 0;
        for (int i = 0; i + 1 < (int)arr.size(); ) {
            if (arr[i] - arr[i+1] < k) {
                sum += arr[i] + arr[i+1];
                i += 2;
            } else {
                i++;
            }
        }
        return sum;
    }
};