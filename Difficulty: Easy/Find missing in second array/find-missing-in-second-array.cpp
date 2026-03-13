class Solution {

  public:
    vector<int> findMissing(vector<int>& a, vector<int>& b) {
        // Your code goes here
        unordered_set<int> s(b.begin(),b.end());
        vector<int>res;
        for(int x:a){
            if(s.find(x) == s.end()){
                res.push_back(x);
            }
        }return res;
        
    }
};
