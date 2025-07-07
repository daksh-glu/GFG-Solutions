// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string s1, string s2) {
    // Your code goes here
    int freq1[26] = {0};  
    int freq2[26] = {0};  
   
    for (int i = 0; i < s1.length(); i++) {
        char ch = s1[i];
        freq1[ch - 'a']++;
    }

    for (int i = 0; i < s2.length(); i++) {
        char ch = s2[i];
        freq2[ch - 'a']++;
    }

    int deletions = 0;

    for (int i = 0; i < 26; i++) {
        deletions = deletions + abs(freq1[i] - freq2[i]);
    }

    return deletions;
}