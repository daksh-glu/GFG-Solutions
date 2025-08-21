class Solution {
  public:
    int maxConsecBits(vector<int> &arr) {
        // code here
        int maxCount_1 = 0; 
        int maxCount_0 = 0; 
        int currentCount_1 = 0;  
        int currentCount_0 = 0;  
        for (int num : arr) {
            if (num == 1) {
                currentCount_1++; 
                maxCount_1 = max(maxCount_1, currentCount_1); 
                currentCount_0 = 0;
            } else {
                currentCount_0++;
                maxCount_0 = max(maxCount_0, currentCount_0); 
                currentCount_1 = 0;  
            }
        }
        if(maxCount_1 > maxCount_0){
            return maxCount_1;
        }
        else{
            return maxCount_0;
        }
        
        
        
    }
};