class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        // Code Here
        int index = 0;
        int n = arr.size();
        for(int i=0; i<n-1; i++){
            if(arr[i] > arr[i+1]){
                index = i+1;
                break;
                
            }
        }return index;
    }
};
