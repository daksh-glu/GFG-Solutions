class Solution {
public:
    bool areIsomorphic(string &s1, string &s2) {
        if (s1.size() != s2.size()) return false;
        vector<int> m1(26, -1), m2(26, -1);
        for (int i = 0; i < s1.size(); i++) {
            int a = s1[i] - 'a';
            int b = s2[i] - 'a';
            if (m1[a] == -1 && m2[b] == -1) {
                m1[a] = b;
                m2[b] = a;
            } else if (m1[a] != b || m2[b] != a) {
                return false;
            }
        }
        return true;
    }
};