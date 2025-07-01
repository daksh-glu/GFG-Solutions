// Return true if s is binary, else false
class Solution {
  public:
    bool isBinary(string& s) {
        // Your code here
        for(int i = 0; i < s.length(); i++){
            if(s[i] != '1' && s[i] != '0'){
                return false;
            }
        }
        return true;
        
    }
};