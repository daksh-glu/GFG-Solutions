class Solution {
  public:
    bool isBinaryPalindrome(int n) {
        // code here
        string binary = "";
        while (n > 0) {
            binary += (char)('0' + n % 2);
            n /= 2;
        }
        string reversed = binary;
        reverse(reversed.begin(), reversed.end());
        return binary == reversed;
    }
};