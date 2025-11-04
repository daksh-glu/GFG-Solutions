// Function to locate the occurrence of the string x in the string s.
class Solution {
  public:
    int firstOccurence(string &txt, string &pat) {
        // Your code here
        int pos1 = -1;
        int patIdx = 0;
        int sizeOftxt = txt.length();
        int sizeOfpat = pat.length();
        for(int i = 0; i < sizeOftxt; i++){
            if(txt[i] == pat[0]){
                bool flag = true;
                for(int j = 1; j < sizeOfpat; j++){
                    if(txt[i+j] != pat[j]){
                        flag = false;
                        break;
                    }
                }
                if(flag){
                    pos1 = i;
                    break;
                } 
            }
        }
        
        return pos1;
    }
};
