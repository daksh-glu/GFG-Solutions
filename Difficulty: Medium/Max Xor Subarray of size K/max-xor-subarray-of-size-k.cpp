class Solution {
public:
    int maxSubarrayXOR(vector<int>& arr, int k) {
        int xorVal = 0, maxXor = INT_MIN;
        for (int i = 0; i < k; i++) xorVal ^= arr[i];
        maxXor = xorVal;
        for (int i = k; i < arr.size(); i++) {
            xorVal ^= arr[i] ^ arr[i - k];
            maxXor = max(maxXor, xorVal);
        }
        return maxXor;
    }
};