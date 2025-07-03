int maxlength(string s) {
    // your code here
    int count = 0;
    int ans = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '1'){
            count++;
            ans = max(ans,count);
        }
        else{
            count = 0;
        }
    }
    return ans;
    
}