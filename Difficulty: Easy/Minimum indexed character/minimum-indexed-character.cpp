class Solution {
public:
    int minIndexChar(string &s1, string &s2) {
        unordered_set<char> set2(s2.begin(), s2.end());

        for (int i = 0; i < s1.size(); i++) {
            if (set2.find(s1[i]) != set2.end())
                return i;
        }
        return -1;
    }
};
