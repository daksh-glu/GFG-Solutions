class Solution {
public:
    long binarySubstring(int n, string a) {
        int count = 0;
        for (int i = 0; i < a.length(); i++) {
            char c = a[i];
            if (c == '1') count++;
        }
        return (long)count * (count - 1) / 2;
    }
};
