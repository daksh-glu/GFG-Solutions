class Solution {
public:
    int penaltyScore(string S) {
        int score = 0;
        for (int i = 0; i < S.length(); i++) {
            if (S[i] == '2' && i + 1 < S.length() && S[i + 1] == '1') {
                score++;
            }
        }
        return score;
    }
};
