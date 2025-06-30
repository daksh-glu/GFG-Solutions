
class Solution {
  public:

    int extractMaximum(string S) {
        // code here.
        vector<string> result;
        string num = "";
        
        for(int i = 0; i < S.length(); i++) {
            if(isdigit(S[i])) {
                num += S[i];
            }else{
                if(!num.empty()){
                    result.push_back(num);
                    num = "";
                }
            }
        }
        
        if(!num.empty()) {
            result.push_back(num);
        }
        int cmp = -1;
        for(int i= 0; i < result.size(); i++){
            if(stoi(result[i]) > cmp){
                cmp = stoi(result[i]);
            }
        }
        
        return cmp;;
    }
};