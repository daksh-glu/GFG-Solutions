vector<int> solve(int n, int d) {
    vector<int> ans;
    char ch = d + '0'; // convert digit to character

    for (int i = 0; i <= n; i++) {
        string s = to_string(i); // convert number to string
        if (s.find(ch) != string::npos) {
            ans.push_back(i); // if digit found, add to result
        }
    }
    if(ans.empty()){
        ans.push_back(-1);
    }

    return ans;
}
