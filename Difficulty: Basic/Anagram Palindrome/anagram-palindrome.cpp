int isPossible(string S) {
    // your code here
    unordered_map<char, int> freq;

  
    for (char c : S) {
        freq[c]++;
    }

  
    int oddCount = 0;
    for (auto it : freq) {
        if (it.second % 2 != 0) {
            oddCount++;
        }
    }

   
    if (oddCount > 1) return 0;
    return 1;
}