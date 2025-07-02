class Solution {
public:
    string concatenatedString(string s1, string s2) {
        unordered_set<char> set1(s1.begin(), s1.end());
        unordered_set<char> set2(s2.begin(), s2.end());

        string result = "";
        for (int i = 0; i < s1.length(); i++) {
            char c = s1[i];
            if (set2.find(c) == set2.end()) {
                result += c;
            }
        }
        for (int i = 0; i < s2.length(); i++) {
            char c = s2[i];
            if (set1.find(c) == set1.end()) {
                result += c;
            }
        }

        return result.empty() ? "-1" : result;
    }
};
