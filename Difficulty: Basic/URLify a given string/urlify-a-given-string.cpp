class Solution {
public:
    string URLify(string s) {
        string result = "";
        for (int i = 0; i < s.length(); i++) {
            char c = s[i];
            if (c == ' ') {
                result += "%20";
            } else {
                result += c;
            }
        }
        return result;
    }
};
