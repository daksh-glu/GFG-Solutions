bool check_duck(string N) {
   
    if (N[0] == '0') return false;

    for (int i = 1; i < N.length(); i++) {
        if (N[i] == '0') return true;
    }

    return false;
}
