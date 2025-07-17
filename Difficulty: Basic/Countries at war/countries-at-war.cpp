// Function to determine which country is at war
class Solution {

  public:
    string countryAtWar(vector<int>& arr1, vector<int>& arr2) {
        // code
        int count1 = 0;
        int count2 = 0;
        for(int i = 0; i < arr1.size(); i++){
            if(arr1[i] > arr2[i]){
                count1++;
            }
            else if(arr1[i] < arr2[i]){
                count2++;
            }
        }
        if(count1 > count2){
            return "A";
        }
        else if(count1 == count2){
            return "DRAW";
        }
        else{
            return "B";
        }
    }
};