class Solution {
public:
    int missingNum(vector<int>& arr) {
        int n = arr.size();
        long long totalSum = 1LL * (n + 1) * (n + 2) / 2; // sum of 1..n+1
        long long currentSum = 0;
        
        for (int num : arr) {
            currentSum += num;
        }
        
        return (int)(totalSum - currentSum);
    }
};
