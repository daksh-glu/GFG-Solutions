class Solution {
  public:
    void insertAtIndex(vector<int> &arr, int index, int val) {
        // code here
        int n = arr.size();
        int last_digit =  arr[n-1];
        
        //cout<<arr[0]<<" "<<arr[n]<<endl;
        for(int i = n-1; i > index; i--){
            arr[i] = arr[i-1];
            //cout<<arr[i]<<" "<<i<<endl;
        }
        
        if(index != n){
            arr[index] = val;
            arr.push_back(last_digit);
        }
        else{
            arr.push_back(val);
        }
        
        
    }
};
