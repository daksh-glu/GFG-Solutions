

class Solution {

  public:
    bool isVowel(char c) {
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    }
    
    bool isConsonant(char c) {
        return !isVowel(c);
    }

    string Sandwiched_Vowel(string &s) {
        // Your code goes here
        string ans = "";
        int n = s.length();
        for(int i = 0; i < n; i++){
            if(i > 0 && i < n-1 && isVowel(s[i]) && isConsonant(s[i-1]) && isConsonant(s[i+1])){
                continue;
            }
            else{
                ans+=s[i];
            }
        }
        return ans;
    }
};