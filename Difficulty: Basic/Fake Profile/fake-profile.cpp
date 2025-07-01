string solve(string a) {
    // code here
    unordered_set<char> seen;
    string result = "";
    int count = 0;

    for (int i = 0; i < a.length(); i++) {
        char c = a[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            continue;
        else if(seen.find(c) == seen.end()){
            count++;
            seen.insert(c);
        }
    }
    if(count % 2 == 0){
        result  = "SHE!";
    }else{
        result = "HE!";
    }
    

    return result;
}