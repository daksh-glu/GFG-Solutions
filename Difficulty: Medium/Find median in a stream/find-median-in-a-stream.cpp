class Solution {
public:
    vector<double> getMedian(vector<int> &arr) {
        priority_queue<int> left;
        priority_queue<int, vector<int>, greater<int>> right;
        vector<double> res;

        for (int x : arr) {
            left.push(x);
            right.push(left.top());
            left.pop();

            if (left.size() < right.size()) {
                left.push(right.top());
                right.pop();
            }

            if (left.size() > right.size()) {
                res.push_back((double)left.top());
            } else {
                res.push_back((left.top() + right.top()) / 2.0);
            }
        }
        return res;
    }
};