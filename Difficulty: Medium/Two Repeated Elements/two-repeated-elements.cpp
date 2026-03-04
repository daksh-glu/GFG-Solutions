class Solution {
public:
    vector<int> twoRepeated(vector<int>& arr) {
        unordered_map<int,int> freq;
        vector<int> res;
        for (int x : arr) {
            freq[x]++;
            if (freq[x] == 2) res.push_back(x);
            if (res.size() == 2) break;
        }
        return res;
    }
};