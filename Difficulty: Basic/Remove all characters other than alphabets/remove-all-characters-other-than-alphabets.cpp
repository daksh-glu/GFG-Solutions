// User function template for C++

class Solution {
  public:
    string removeSpecialCharacter(string s) {
        // code here
        string ans = "";
        
        for(int i = 0; i < s.length(); i++){
            if((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z')){
                ans += s[i];
            }
        }
        if(ans.empty()){
            ans = "-1";
        }
        return ans;
    }
};