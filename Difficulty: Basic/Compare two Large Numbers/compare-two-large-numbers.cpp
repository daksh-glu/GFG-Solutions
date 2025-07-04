int check(string a, string b) {
    int i = 0;
    while (i < a.length() && a[i] == '0') i++;
    a = a.substr(i);
    
    int j = 0;
    while (j < b.length() && b[j] == '0') j++;
    b = b.substr(j);
    
    if (a.length() < b.length()) return 1;
    if (a.length() > b.length()) return 2;

    for (int i = 0; i < a.length(); i++) {
        if (a[i] < b[i]) return 1;
        if (a[i] > b[i]) return 2;
    }

    return 3;
}