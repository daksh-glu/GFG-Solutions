/*You are required to complete the function*/
class Solution {
  public:
    int findMaxProduct(vector<int>& arr, int k) {
        // code here
        
        int ans = 1;
        int n = arr.size();
        for(int i = 0; i < n; i++){
            int product = 1;
            for(int j = i; j < i+k && j<n; j++){
                product *= arr[j];
                
            }
            //cout<<product<<endl;
            ans = max(ans,product);
        }
        return ans;
    }
};