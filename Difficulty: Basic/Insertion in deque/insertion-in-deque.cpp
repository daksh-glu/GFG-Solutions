class Solution {
  public:
    deque<int> dqInsertion(const vector<int>& arr) {
        // code here
        deque<int> dq;
       
        for (int i = 0; i < arr.size(); i++) {
            int num = arr[i]
;            dq.push_back(num);
        }
        
        return dq;
    }
};