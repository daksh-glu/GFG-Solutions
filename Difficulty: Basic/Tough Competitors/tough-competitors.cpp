class Solution {
public:
    int minDiff(vector<int>& arr) {
        sort(arr.begin(), arr.end()); 
        
        int diff = INT_MAX; 
        
        
        for(int i = 1; i < arr.size(); i++) {
            int currentDiff = abs(arr[i] - arr[i-1]);
            diff = min(diff, currentDiff);
        }
        
        return diff; 
    }
};
