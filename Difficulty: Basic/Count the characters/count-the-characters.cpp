
class Solution {
  public:
    int getCount(string S, int N) {
        // code here.
        map<char,int> mp;
       
        int i  = 0;
        while(i < S.length()) {
            while((i < S.length()-1 ) && S[i] == S[i+1]){
                i++;
            }
            mp[S[i]]++;
            i++;
        }
        
        int count = 0;
        for(auto i = mp.begin(); i != mp.end(); i++){
            if(i->second == N){
                count++;
            }
        }
        return count;
    }
};