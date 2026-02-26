class Solution {
public:
    vector<int> jobSequencing(vector<int> &deadline, vector<int> &profit) {
        int n = deadline.size();
        vector<pair<int,int>> jobs;
        for (int i = 0; i < n; i++) jobs.push_back({profit[i], deadline[i]});
        sort(jobs.rbegin(), jobs.rend());

        int maxd = 0;
        for (int d : deadline) maxd = max(maxd, d);

        vector<int> parent(maxd + 1);
        for (int i = 0; i <= maxd; i++) parent[i] = i;

        function<int(int)> find = [&](int x) {
            if (parent[x] == x) return x;
            return parent[x] = find(parent[x]);
        };

        int cnt = 0, prof = 0;
        for (auto &j : jobs) {
            int d = find(j.second);
            if (d > 0) {
                parent[d] = find(d - 1);
                cnt++;
                prof += j.first;
            }
        }
        return {cnt, prof};
    }
};