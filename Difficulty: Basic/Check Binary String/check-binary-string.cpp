
class Solution {
  public:
    bool checkBinary(string s) {
        // Your Code Here
        int firstOneIndex = -1;
        int lastOneIndex = -1;

        for (int i = 0; i < s.length(); ++i) {
            if (s[i] == '1') {
                firstOneIndex = i;
                break;
            }
        }
        if (firstOneIndex == -1) {
            return true;
        }
        for (int i = s.length() - 1; i >= 0; i--) {
            if (s[i] == '1') {
                lastOneIndex = i;
                break;
            }
        }
        for (int i = firstOneIndex+1; i < lastOneIndex; ++i) {
            if (s[i] == '0') {
                return false; 
            }
        }
        return true;
        
    }
};