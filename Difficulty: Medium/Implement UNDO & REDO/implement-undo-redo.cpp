class Solution {
    string doc;
    stack<char> undoStack;
    stack<char> redoStack;
    
public:
    void append(char x) {
        doc += x;
        undoStack.push(x);
        while (!redoStack.empty()) {
            redoStack.pop();
        }
    }
    
    void undo() {
        if (!doc.empty()) {
            char ch = doc.back();
            redoStack.push(ch);
            undoStack.pop();
            doc.pop_back();
        }
    }
    
    void redo() {
        if (!redoStack.empty()) {
            char ch = redoStack.top();
            redoStack.pop();
            doc += ch;
            undoStack.push(ch);
        }
    }
    
    string read() {
        return doc;
    }
};