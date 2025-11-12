class Solution {
  public:
    string isPowerof3(int N) {
        // code here
        if (N <= 0) {
            return "No";
        }
        
        if (N == 1) {
            return "Yes";
        }
        
        if (N % 3 != 0) {
            return "No";
        }
        
        return isPowerof3(N / 3);
        
    }
};