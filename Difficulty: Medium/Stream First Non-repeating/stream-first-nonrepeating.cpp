class Solution {
public:
    string firstNonRepeating(string &s) {
        unordered_map<char, int> freq;
        queue<char> q;
        string result = "";
        
        for (int i = 0; i < s.length(); i++) {
            char ch = s[i];
            freq[ch]++;
            q.push(ch);
            
            while (!q.empty() && freq[q.front()] > 1) {
                q.pop();
            }
            
            if (!q.empty()) {
                result += q.front();
            } else {
                result += '#';
            }
        }
        
        return result;
    }
};