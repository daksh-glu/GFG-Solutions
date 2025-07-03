// Write your code here


class Solution {
  public:
    vector<int> mergeNsort(vector<int>& a, vector<int>& b) {
        
        // Write your code here
        set<int> s(a.begin(), a.end());
        s.insert(b.begin(), b.end());
        
        vector<int> result(s.begin(), s.end());
        
        return result;
    }
};