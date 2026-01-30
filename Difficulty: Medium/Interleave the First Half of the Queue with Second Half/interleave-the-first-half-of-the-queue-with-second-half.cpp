class Solution {
public:
    void rearrangeQueue(queue<int> &q) {
        int n = q.size();
        int half = n / 2;
        
        stack<int> st;
        
        for (int i = 0; i < half; i++) {
            st.push(q.front());
            q.pop();
        }
        
        while (!st.empty()) {
            q.push(st.top());
            st.pop();
        }
        
        for (int i = 0; i < half; i++) {
            q.push(q.front());
            q.pop();
        }
        
        for (int i = 0; i < half; i++) {
            st.push(q.front());
            q.pop();
        }
        
        while (!st.empty()) {
            q.push(st.top());
            st.pop();
            q.push(q.front());
            q.pop();
        }
    }
};