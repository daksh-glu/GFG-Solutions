class Solution {
public:
    string uncommonChars(string s1, string s2) {
        int freq1[26] = {0};
        int freq2[26] = {0};
        string ans = "";

        for(int i = 0; i < s1.length(); i++) {
            char ch = s1[i];
            freq1[ch - 'a']++;
        }

        for(int i = 0; i < s2.length(); i++) {
            char ch = s2[i];
            freq2[ch - 'a']++;
        }
        
        for(int i = 0; i < 26; i++) {
            if((freq1[i] > 0 && freq2[i] == 0) || (freq1[i] == 0 && freq2[i] > 0)) {
                ans += (char)(i + 'a');
            }
        }
        //if(ans == "") return "";

        return ans;
    }
};
