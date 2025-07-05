class Solution {
  public:
    bool isIdentical(vector<int> &a, vector<int> &b) {
        
        if(a.size() != b.size()){
            return false;
        }
        // Your code goes here.
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        
        for(int i = 0; i < a.size(); i++){
            if(a[i] != b[i]){
                return false;
            }
        }
        return true;
        
    }
};