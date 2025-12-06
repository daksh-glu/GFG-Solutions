class Solution {
public:
    vector<int> increment(vector<int> arr, int N) {
        int carry = 1;
        for (int i = N - 1; i >= 0; i--) {
            int sum = arr[i] + carry;
            arr[i] = sum % 10;
            carry = sum / 10;
        }
        if (carry) arr.insert(arr.begin(), carry);
        return arr;
    }
};
