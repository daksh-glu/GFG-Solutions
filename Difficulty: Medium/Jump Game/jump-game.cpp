// User function Template for C++

class Solution {
  public:
    // Function to check if we can reach the last index from 0th index.
    bool canReach(vector<int> &arr) {
        // code here
        int reachable = 0;
        for (int i = 0; i < arr.size(); i++) {
            if (i > reachable)
                return false;
            reachable = max(reachable, i + arr[i]);
            if (reachable >= arr.size() - 1)
                return true;
        }
        return true;
    }
};