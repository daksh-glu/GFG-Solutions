class Solution {
public:
    vector<int> mergeArrays(vector<vector<int>> &mat) {
        priority_queue<pair<int,pair<int,int>>, vector<pair<int,pair<int,int>>>, greater<>> pq;
        for (int i = 0; i < mat.size(); i++)
            pq.push({mat[i][0], {i, 0}});
        vector<int> res;
        while (!pq.empty()) {
            auto [val, idx] = pq.top(); pq.pop();
            auto [r, c] = idx;
            res.push_back(val);
            if (c + 1 < mat[r].size())
                pq.push({mat[r][c+1], {r, c+1}});
        }
        return res;
    }
};