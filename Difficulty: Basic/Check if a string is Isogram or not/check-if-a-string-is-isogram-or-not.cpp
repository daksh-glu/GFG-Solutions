

class Solution {
  public:
    // Function to check if a string is Isogram or not.
    bool isIsogram(string s) {
        // Your code here
        int freq1[26] = {0};
        for(int i = 0; i < s.length(); i++) {
            char ch = s[i];
            freq1[ch - 'a']++;
        }
        for(int i = 0; i < 26; i++) {
            if(freq1[i] > 1) {
                return false;
            }
        }
        return true;
    }
};