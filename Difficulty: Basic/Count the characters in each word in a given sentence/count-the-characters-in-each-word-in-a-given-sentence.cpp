class Solution {
  public:
    vector<int> countChars(string s) {
        // code here
        vector<int> result;
        int count = 0;
        for(int i=0; i<s.length(); i++){
            if(s[i] == ' '){
                result.push_back(count);
                count = 0;
            }
            else{
                count++;
            }
        }
        result.push_back(count);
        return result;
    }
};