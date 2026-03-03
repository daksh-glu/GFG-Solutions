class Solution {
  public:
    int findMin(int n) {
        // code here
        vector<int> coins = {1, 2, 5, 10};
        int count = 0;
        for (int i = coins.size()-1; i >= 0; i--) {
            count += n / coins[i];
            n %= coins[i];
        }
        return count;
    }
};