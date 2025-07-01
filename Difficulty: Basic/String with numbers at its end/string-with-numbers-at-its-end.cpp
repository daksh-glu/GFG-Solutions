class Solution {
public:
    int isSame(string s) {
        int n = s.length();
        int i = n - 1;
        while (i >= 0 && isdigit(s[i])) {
            i--;
        }
        string numberStr = s.substr(i + 1);
        string textPart = s.substr(0, i + 1); 

        if (numberStr.empty()) return 0;

        long long number;
        try {
            number = stoll(numberStr);
        } catch (...) {
            return 0; 
        }
        if ((long long)textPart.length() == number)
            return 1;
        else
            return 0;
    }
};
