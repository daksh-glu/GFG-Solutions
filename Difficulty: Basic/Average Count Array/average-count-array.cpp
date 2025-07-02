
class Solution {
  public:
    vector<int> countArray(vector<int>& arr, int x) {
        // Complete the function
        unordered_map<int, int> freq;
        for (int i = 0; i < arr.size(); i++) {
            int val = arr[i];
            freq[val]++;
        }

        vector<int> result;
        for (int i = 0; i < arr.size(); i++) {
            int val = arr[i];
            int avg = (val + x) / 2;
            result.push_back(freq[avg]);
        }
        return result;
    }
};