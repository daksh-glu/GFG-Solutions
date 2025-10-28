class Solution {
  public:
    bool isBalanced(string& s) {
        // code here
        int n1 = s.size();
        stack<char>st;
        for(int i = 0; i < n1; i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                st.push(s[i]);
            }
            else{
                if(st.empty()){
                    return false;
                }
                char ch = st.top();
                if(s[i] == ')'&& ch == '(' || s[i] == '}' && ch == '{' || s[i] == ']' && ch == '[' ){
                    st.pop();
                } 
                else{
                    return false;
                }
            }
        }
        return st.empty();
        
    }
};