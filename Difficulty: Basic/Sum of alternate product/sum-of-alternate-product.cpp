class Solution {
  public:
    int altProduct(vector<int>& arr) {
        // Your code goes here
        vector<int> ans = arr;
        
        sort(ans.begin(),ans.end());
        
        int n = ans.size();
        int m = n / 2;
        int sum = 0;
        for(int i = 0; i < m; i++){
            sum += (ans[i] * ans[n-i-1]);
        }
        //cout<<endl;
        return sum;
    }
};