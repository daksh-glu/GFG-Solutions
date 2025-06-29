class Solution {
public:
    string removeChars(string str1, string str2) {
        string result = "";

        for (int i = 0; i < str1.length(); i++) {
            bool found = false;
            for (int j = 0; j < str2.length(); j++) {
                if (str1[i] == str2[j]) {
                    found = true;
                    break;
                }
            }
            if (!found) {
                result += str1[i];
            }
        }

        return result;
    }
};
