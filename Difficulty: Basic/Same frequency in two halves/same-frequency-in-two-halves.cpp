class Solution {
public:
    bool passed(string s) {
        int n = s.length();

        
        if (n % 2 != 0) {
            s.erase(n / 2, 1);
        }

        
        int half = s.length() / 2;
        string firstHalf = s.substr(0, half);
        string secondHalf = s.substr(half, half);

        
        int count1[26] = {0};
        int count2[26] = {0};

        
        for (int i = 0; i < firstHalf.length(); i++) {
            char ch = firstHalf[i];
            count1[ch - 'a']++;
        }

       
        for (int i = 0; i < secondHalf.length(); i++) {
            char ch = secondHalf[i];
            count2[ch - 'a']++;
        }

        
        for (int i = 0; i < 26; i++) {
            if (count1[i] != count2[i]) {
                return false;
            }
        }

        return true;
    }
};
