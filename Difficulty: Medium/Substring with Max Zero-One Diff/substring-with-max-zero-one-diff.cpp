class Solution {
  public:
    int maxSubstring(string &s) {
        if(s.find('0') == string::npos) return -1;
        
        int maxSum = INT_MIN, curr = 0;
        for(char c : s) {
            curr += (c == '0') ? 1 : -1;
            maxSum = max(maxSum, curr);
            if(curr < 0) curr = 0;
        }
        return maxSum;
    }
};