
class Solution {
  public:

    string modify(string& s) {
        // your code here
        if (isupper(s[0])){
            transform(s.begin(), s.end(), s.begin(), ::toupper);
        } else{
            transform(s.begin(), s.end(), s.begin(), ::tolower);
        }
        return s;
    }
};