string isGoodString(string s) {
    int n = s.length();
    if (n == 1) return "YES"; 

    for (int i = 0; i < n - 1; i++) {
        int diff = abs(s[i] - s[i + 1]);
        int minDist = min(diff, 26 - diff);
        if (minDist != 1) return "NO";
    }

    return "YES";
}
