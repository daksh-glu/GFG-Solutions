// User function Template for C++

class Solution {
  public:
    vector<string> splitString(string S) {
        // code here
        string s1 = "";
        string s2 = "";
        string s3 = "";
        for(int i = 0; i < S.length(); i++){
            if((S[i] >= 'a' && S[i] <= 'z') || (S[i] >= 'A' && S[i] <= 'Z')){
                s1 += S[i];
            }
            else if(isdigit(S[i])){
                s2 += S[i];
            }
            else{
                s3 += S[i];
            }
        }
        return {s1,s2,s3};
        
        
    }
};
