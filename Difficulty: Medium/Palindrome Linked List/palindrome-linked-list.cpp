/*
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
       data = x;
       next = NULL;
    }
};
*/

class Solution {
  public:
    bool isPalindrome(Node *head) {
        //  code here
        vector<int> v;
        while(head){
            v.push_back(head->data);
            head = head->next;
        }
        int i = 0, j = v.size()-1;
        while(i < j){
            if(v[i] != v[j]) return false;
            i++;
            j--;
        }
        return true;
        
    }
};