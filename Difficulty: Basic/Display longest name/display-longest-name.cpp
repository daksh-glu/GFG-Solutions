
class Solution {
  public:
    string longest(vector<string>& arr) {
        // code here
        int ans = INT_MIN;
        int index = 0;
        for(int i = 0; i < arr.size(); i++){
            int count = 0;
            for(int j = 0; j < arr[i].length(); j++){
                count++;
            }
            if(ans < count){
                index = i;
            }
            ans = max(ans,count);
            
                
        }
        //cout<<ans<<" "<<index<<endl;
        
        string result = arr[index];
        
        return result;
        
    }
};
