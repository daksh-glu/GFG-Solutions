// User function Template for C++
class Solution {
  public:
    int areAnagram(string S1, string S2) {
        // code here
        int ans = 0;
        if(S1.length() != S2.length()){
            return 0;
        }
        sort(S1.begin(), S1.end());
        sort(S2.begin(), S2.end());
        for(int i = 0; i < S1.length(); i++){
            if(S1[i]!=S2[i]){
                return 0;
            }
        }
        return 1;
    }
};