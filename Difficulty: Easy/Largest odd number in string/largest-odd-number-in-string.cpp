class Solution {
  public:
    string maxOdd(string s) {
        // your code here
        for (int i = s.length() - 1; i >= 0; i--) {
            if ((s[i] - '0') % 2 == 1) {
                return s.substr(0, i + 1);
            }
        }
        return "";
    }
};