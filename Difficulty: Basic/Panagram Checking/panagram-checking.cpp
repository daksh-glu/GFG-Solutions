// User function Template for C++

class Solution {
  public:
    bool isPanagram(string &s) {

        // Your code here
        int count = 0;
        if(s.length() < 26){
            return 0;
        }
            
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        sort(s.begin(), s.end());
        
        for (int i = 0; i < s.size(); i++) {
            if(s[i] != s[i + 1])
                count++;
        }
        //cout<<count<<endl;
        if (count == 26)
            return 1;
    
        else
            return 0;
        
    }
};