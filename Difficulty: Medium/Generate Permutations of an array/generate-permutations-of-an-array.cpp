class Solution {
public:
    vector<vector<int>> permuteDist(vector<int>& arr) {
        vector<vector<int>> result;
        vector<int> current = arr;
        sort(current.begin(), current.end());
        
        do {
            result.push_back(current);
        } while (next_permutation(current.begin(), current.end()));
        
        return result;
    }
};