class Solution {
public:
    long subarrayXor(vector<int> &arr, int k) {
        unordered_map<int, int> mp;
        int xr = 0;
        long count = 0;
        
        for (int i = 0; i < arr.size(); i++) {
            xr ^= arr[i];
            
            if (xr == k)
                count++;
                
            if (mp.find(xr ^ k) != mp.end())
                count += mp[xr ^ k];
                
            mp[xr]++;
        }
        
        return count;
    }
};