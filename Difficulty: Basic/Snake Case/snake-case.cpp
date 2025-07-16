class Solution {
  public:
    string snakeCase(string S, int n) {
        // code here
        string ans = "";
        transform(S.begin(), S.end(), S.begin(), ::tolower);
        for(int i = 0; i < S.length(); i++){
            if(S[i] == ' '){
                ans += '_';
            }
            else{
                ans += S[i];
            }
        }
        return ans;
        
    }
};