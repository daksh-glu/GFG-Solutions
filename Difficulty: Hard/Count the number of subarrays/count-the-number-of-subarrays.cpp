class Solution {
public:
    long long countSubarraysLessThanEqual(int N, vector<int>& A, long long X) {
        long long count = 0;
        long long current_sum = 0;
        int left = 0;
        
        for (int right = 0; right < N; right++) {
            current_sum += A[right];
            while (current_sum > X && left <= right) {
                current_sum -= A[left];
                left++;
            }
            count += (right - left + 1);
        }
        return count;
    }

    long long countSubarray(int N, vector<int>& A, long long L, long long R) {
        return countSubarraysLessThanEqual(N, A, R) - countSubarraysLessThanEqual(N, A, L - 1);
    }
};