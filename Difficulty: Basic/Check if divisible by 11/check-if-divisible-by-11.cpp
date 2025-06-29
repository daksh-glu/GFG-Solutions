class Solution {
  public:
    int divisibleBy11(string S) {
        int odd_sum = 0, even_sum = 0;

        for(int i = 0; i < S.length(); ++i) {
            int digit = S[i] - '0';
            if(i % 2 == 0) 
                odd_sum += digit;
            else
                even_sum += digit;
        }

        if(abs(odd_sum - even_sum) % 11 == 0)
            return 1;
        return 0;
    }
};
