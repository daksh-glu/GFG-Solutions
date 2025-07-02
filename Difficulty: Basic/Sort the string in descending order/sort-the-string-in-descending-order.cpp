
string ReverseSort(string str) {
    // complete the function here
    sort(str.begin(), str.end(), greater<char>());
    return str;
}