class Solution {
public:
    string modify(string& s) {
        string vowels = "";
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
                vowels += s[i]; 
            }
        }

        int k = vowels.length() - 1;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
                s[i] = vowels[k]; 
                k--; 
            }
        }

        return s;
    }
};
