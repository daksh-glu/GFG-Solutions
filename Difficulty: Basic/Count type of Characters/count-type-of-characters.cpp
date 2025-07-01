class Solution {
public:
    vector<int> count(string s) {
        int upper = 0, lower = 0, digit = 0, special = 0;
        
        for(int i = 0; i < s.length(); i++) {
            char ch = s[i];
            if(isupper(ch)) upper++;
            else if(islower(ch)) lower++;
            else if(isdigit(ch)) digit++;
            else special++;
        }
        vector<int> ans;
        ans.push_back(upper);
        ans.push_back(lower);
        ans.push_back(digit);
        ans.push_back(special);
        
        return ans;
    }
};
