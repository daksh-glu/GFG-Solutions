class Solution {
  public:
    vector<int> findEvenOccurrences(vector<int>& arr) {
        // code here
        vector<int> ans;
        vector<int> num;
        unordered_map<int,int> mp;
        for(int i = 0; i < arr.size(); i++){
            if (mp[arr[i]] == 0) {
                num.push_back(arr[i]);
            }
            mp[arr[i]]++;
        }
        
        
        for(int i = 0; i < num.size(); i++){
            if(mp[num[i]] % 2 == 0) {
                ans.push_back(num[i]);
            }
        }
        if(ans.empty()){
            ans.push_back(-1);
        }
        return ans;
    }
};
