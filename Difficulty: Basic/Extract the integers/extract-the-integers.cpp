vector<string> extractIntegerWords(string s) {
    vector<string> result;
    string num = "";
    
    for(int i = 0; i < s.length(); i++) {
        if(isdigit(s[i])) {
            num += s[i];
        }else{
            if(!num.empty()){
                result.push_back(num);
                num = "";
            }
        }
    }
    
    if(!num.empty()) {
        result.push_back(num);
    }
    
    return result;
}
