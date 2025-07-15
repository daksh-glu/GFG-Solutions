long long int modify(long long int N) {
    string num = to_string(N);
    string result = "";

    result += num[0]; 

    for (int i = 1; i < num.length(); i++) {
        if (num[i] != num[i - 1]) {
            result += num[i];
        }
    }

    return stoll(result); 
}
