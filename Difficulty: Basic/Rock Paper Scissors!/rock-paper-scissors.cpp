class Solution {
public:
    string gameResult(string s) {
       
        if (s[0] == s[1]) return "DRAW";
       
        if ((s[0] == 'R' && s[1] == 'S') || (s[0] == 'S' && s[1] == 'P') || (s[0] == 'P' && s[1] == 'R')) {
            return "A";
        } else {
            return "B";
        }
    }
};
