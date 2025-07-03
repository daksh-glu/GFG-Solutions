class Solution {
public:
    int maxProfit(int m, vector<int> &arr) {
        vector<int> loss;
        for (int i = 0; i < arr.size(); i++) {
            int x = arr[i];
            if (x < 0) loss.push_back(-x); // convert to positive for sorting
        }
        sort(loss.begin(), loss.end(), greater<int>());
        int profit = 0;
        for (int i = 0; i < min(m, (int)loss.size()); i++) {
            profit += loss[i];
        }
        return profit;
    }
};
