class Solution {
public:
    int derangeCount(int n) {
        if (n == 1) return 0;
        if (n == 2) return 1;
        long long a = 0, b = 1;
        for (int i = 3; i <= n; i++) {
            long long c = (i-1) * (a + b);
            a = b; b = c;
        }
        return (int)b;
    }
};