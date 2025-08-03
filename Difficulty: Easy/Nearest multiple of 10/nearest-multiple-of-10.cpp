class Solution {
  public:
    string roundToNearest(string s) {
        int lastDigit = s.back() - '0';
        s.pop_back();  // remove last digit

        if (lastDigit < 5) {
            return s + "0";
        } else if (lastDigit > 5) {
            
            int i = s.length() - 1;
            while (i >= 0 && s[i] == '9') {
                s[i] = '0';
                i--;
            }
            if (i < 0) {
                s = "1" + s;
            } else {
                s[i]++;
            }
            return s + "0";
        } else {
            
            string lower = s + "0";
            
            string temp = s;
            int i = temp.length() - 1;
            while (i >= 0 && temp[i] == '9') {
                temp[i] = '0';
                i--;
            }
            if (i < 0) {
                temp = "1" + temp;
            } else {
                temp[i]++;
            }
            string upper = temp + "0";

            return (lower < upper) ? lower : upper;
        }
    }
};
