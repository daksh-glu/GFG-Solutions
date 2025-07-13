class Solution {
public:
    vector<int> Rearrange(vector<int> arr) {
        
        sort(arr.begin(), arr.end());
        vector<int> result;

        
        int i = 0, j = arr.size() - 1;
        bool turn = true; 

        
        while (i <= j) {
            if (turn)
                result.push_back(arr[i++]);  
            else
                result.push_back(arr[j--]);  
            turn = !turn; 
        }

        return result;
    }
};
