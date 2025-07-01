class Solution {
public:
    int BasicDataType(string s) {
    
        if (s.length() == 1 && !(s[0] >= '0' && s[0] <= '9')) {
            return sizeof(char);
        }

        bool hasDecimal = false;
        int dotPosition = -1;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '.') {
                hasDecimal = true;
                dotPosition = i;
                break;
            }
        }
        if (hasDecimal) {
            int digitsAfterDot = 0;
            for (int i = dotPosition + 1; i < s.length(); i++) {
                digitsAfterDot++;
            }

            if (digitsAfterDot >= 6) {
                return sizeof(double);
            } else {
                return sizeof(float); 
            }
        }

       
        return sizeof(int);
    }
};
