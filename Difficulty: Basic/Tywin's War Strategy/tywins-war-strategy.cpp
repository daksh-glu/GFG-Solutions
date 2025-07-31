class Solution {
public:
    int minSoldiers(vector<int>& arr, int k) {
        int n = arr.size();
        int requiredLuckyTroops = (n + 1) / 2;
        int luckyCount = 0;
        vector<int> toAdd;

        for (int i = 0; i < arr.size(); i++) {
            int num = arr[i];
            if (num % k == 0) {
                luckyCount++;
            } else {
                int remainder = num % k;
                int need = k - remainder;
                toAdd.push_back(need);
            }
        }

        if (luckyCount >= requiredLuckyTroops) {
            return 0;
        }

        sort(toAdd.begin(), toAdd.end());
        int totalAdded = 0;
        int troopsToFix = requiredLuckyTroops - luckyCount;

        for (int i = 0; i < troopsToFix; i++) {
            totalAdded += toAdd[i];
        }

        return totalAdded;
    }
};
