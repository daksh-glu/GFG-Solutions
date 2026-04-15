class Solution {
public:
    string findOrder(vector<string> &words) {
        int n = words.size();
        unordered_map<char, vector<char>> adj;
        unordered_map<char, int> indegree;
        
        for (auto &word : words) {
            for (char c : word) indegree[c] = 0;
        }

        for (int i = 0; i < n - 1; i++) {
            string w1 = words[i], w2 = words[i+1];
            int len = min(w1.size(), w2.size());
            bool found = false;
            for (int j = 0; j < len; j++) {
                if (w1[j] != w2[j]) {
                    adj[w1[j]].push_back(w2[j]);
                    indegree[w2[j]]++;
                    found = true;
                    break;
                }
            }
            if (!found && w1.size() > w2.size()) return "";
        }

        queue<char> q;
        for (auto const& [curr, count] : indegree) {
            if (count == 0) q.push(curr);
        }

        string res = "";
        while (!q.empty()) {
            char u = q.front();
            q.pop();
            res += u;
            for (char v : adj[u]) {
                if (--indegree[v] == 0) q.push(v);
            }
        }

        return res.size() == indegree.size() ? res : "";
    }
};