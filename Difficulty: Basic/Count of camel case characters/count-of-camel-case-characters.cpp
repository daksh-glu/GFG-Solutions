class Solution {
public:
    int countCamelCase(string s) {
        int count = 0;
        for (int i = 0; i < s.length(); i++) {
            char ch = s[i];
            if (isupper(ch)) {
                count++;
            }
        }
        return count;
    }
};
