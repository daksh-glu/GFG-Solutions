string reverseString(string s) {
    unordered_set<char> seen;
    string result = "";

    for (int i = s.length() - 1; i >= 0; i--) {
        char c = s[i];
        if (c == ' ')
            continue;
        if(seen.find(c) == seen.end()){
            result += c;
            seen.insert(c);
        }
    }

    return result;
}
