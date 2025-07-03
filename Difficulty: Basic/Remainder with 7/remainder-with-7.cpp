class Solution {
public:
    int remainderWith7(string n) {
        int rem = 0;
        for (int i = 0; i < n.length(); i++) {
            rem = (rem * 10 + (n[i] - '0')) % 7;
        }
        return rem;
    }
};
