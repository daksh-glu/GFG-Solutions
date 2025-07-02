class Solution {
  public:
    vector<int> dupLastIndex(vector<int>& arr) {
        // code here
        vector<int> ans;
        int duplicate = -1;
        int index = -1;
        for(int i = arr.size() - 1; i >= 0; i--){
            if(arr[i] == arr[i-1]){
                duplicate = arr[i];
                index = i;
                
                break;
            }
        }
        ans.push_back(index);
        ans.push_back(duplicate);
        return ans;
        
    }
};