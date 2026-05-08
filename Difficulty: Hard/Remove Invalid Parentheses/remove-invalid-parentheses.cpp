class Solution {
public:
    vector<string> validParenthesis(string &s) {
        // Count minimum removals needed
        int leftExtra = 0, rightExtra = 0;
        for (char c : s) {
            if (c == '(') leftExtra++;
            else if (c == ')') {
                if (leftExtra > 0) leftExtra--;
                else rightExtra++;
            }
        }

        set<string> result;
        
        // BFS / DFS with pruning
        function<void(string, int, int, int)> solve = [&](string cur, int idx, int leftRem, int rightRem) {
            if (leftRem == 0 && rightRem == 0) {
                // Validate
                int cnt = 0;
                for (char c : cur) {
                    if (c == '(') cnt++;
                    else if (c == ')') {
                        cnt--;
                        if (cnt < 0) return;
                    }
                }
                if (cnt == 0) result.insert(cur);
                return;
            }
            for (int i = idx; i < cur.size(); i++) {
                // Skip duplicates
                if (i > idx && cur[i] == cur[i-1]) continue;
                if (cur[i] == ')' && rightRem > 0) {
                    string next = cur.substr(0, i) + cur.substr(i+1);
                    solve(next, i, leftRem, rightRem - 1);
                }
                if (cur[i] == '(' && leftRem > 0) {
                    string next = cur.substr(0, i) + cur.substr(i+1);
                    solve(next, i, leftRem - 1, rightRem);
                }
            }
        };
        
        solve(s, 0, leftExtra, rightExtra);
        
        vector<string> ans(result.begin(), result.end());
        return ans;
    }
};