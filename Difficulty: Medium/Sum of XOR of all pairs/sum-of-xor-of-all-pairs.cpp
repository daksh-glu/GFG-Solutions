class Solution {
public:
    long long sumXOR(vector<int> &arr) {
        long long result = 0;
        int n = arr.size();
        
        // For each bit position, count numbers with that bit set
        for (int bit = 0; bit < 32; bit++) {
            long long ones = 0, zeros = 0;
            for (int i = 0; i < n; i++) {
                if (arr[i] & (1 << bit))
                    ones++;
                else
                    zeros++;
            }
            // Pairs that contribute to this bit: one with 0, one with 1
            result += (ones * zeros) * (1LL << bit);
        }
        return result;
    }
};
