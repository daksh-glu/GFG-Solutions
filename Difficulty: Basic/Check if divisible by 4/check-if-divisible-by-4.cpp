// User function template for C++
class Solution {
  public:

    int divisibleBy4(string N) {
        // Your Code Here
        int num = 0;
        if(N.length() < 1){
            num = stoi(N);
            if(num % 4 == 0){
                return 1;
            }
            else{
                return 0;
            }
        }
        num = (N[N.length() - 2])*10 + N[N.length() - 1];
        if(num % 4 == 0){
                return 1;
            }
            else{
                return 0;
            }
        
    }
};