class Solution {
public:
    vector<int> uniqueId(vector<int>& arr) {
        vector<bool> seen(10, false); // To track digits 0-9
        vector<int> result;
        
        for (int id : arr) {
            if (!seen[id]) {
                seen[id] = true;
                result.push_back(id);
            }
        }
        
        return result;
    }
};
