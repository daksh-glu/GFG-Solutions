class Solution {
public:
    string reverseWords(string &s) {
        string result = "";
        int n = s.length();
        int i = 0;

        while (i < n) {
            while (i < n && s[i] == ' ')
                i++;

            if (i >= n) break;

            string word = "";
            while (i < n && s[i] != ' ')
                word += s[i++];

            reverse(word.begin(), word.end());

            if (!result.empty())
                result += ' ';

            result += word;
        }

        return result;
    }
};
