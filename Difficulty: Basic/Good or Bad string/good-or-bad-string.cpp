class Solution {
public:
    int isGoodorBad(string S) {
        int v = 0, c = 0;
        for (int i = 0; i < S.length(); i++) {
            char ch = S[i];
            if (ch == '?') {
                v++;
                c++;
            } else if (strchr("aeiou", ch)) {
                v++;
                c = 0;
            } else {
                c++;
                v = 0;
            }

            if (v > 5 || c > 3) return 0;
        }
        return 1;
    }
};
