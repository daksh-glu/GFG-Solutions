class Solution {
public:
    string removeDuplicates(string &s) {
        vector<int> seen(256, 0);
        string ans = "";

        for(char c : s) {
            if(seen[c] == 0) {
                ans += c;
                seen[c] = 1;
            }
        }

        return ans;
    }
};