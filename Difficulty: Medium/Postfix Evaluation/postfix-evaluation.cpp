class Solution {
public:
    int evaluatePostfix(vector<string>& arr) {
        stack<long long> st;
        for (auto& s : arr) {
            if (s == "+" || s == "-" || s == "*" || s == "/" || s == "^") {
                long long b = st.top(); st.pop();
                long long a = st.top(); st.pop();
                if (s == "+") st.push(a + b);
                else if (s == "-") st.push(a - b);
                else if (s == "*") st.push(a * b);
                else if (s == "/") st.push((long long)floor((double)a / b));
                else st.push((long long)pow(a, b));
            } else st.push(stoll(s));
        }
        return st.top();
    }
};