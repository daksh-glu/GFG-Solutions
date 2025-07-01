class Solution {
  public:

    int LastIndex(string s, char p) {
        // complete the function here
        int ans = -1;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == p){
                ans = i;
            }
        }
        return ans;
    }
};