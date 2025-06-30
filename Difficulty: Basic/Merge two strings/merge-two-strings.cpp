
string merge(string S1, string S2) {
    // your code here
    string ans = "";
    int n1 = S1.length();
    int n2 = S2.length();
    int n = max(n1,n2);
    for(int i = 0; i < n; i++){
        if(i < n1){
           ans+=S1[i]; 
        }
        if(i < n2){
            ans+=S2[i];
        }
        
    }
    return ans;
}