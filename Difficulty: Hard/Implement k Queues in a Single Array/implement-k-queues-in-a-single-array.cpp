class kQueues {
    int *arr;
    int *front;
    int *rear;
    int *next;
    int n, k;
    int free;
    
public:
    kQueues(int n, int k) {
        this->n = n;
        this->k = k;
        arr = new int[n];
        front = new int[k];
        rear = new int[k];
        next = new int[n];
        
        for (int i = 0; i < k; i++) {
            front[i] = -1;
        }
        
        free = 0;
        for (int i = 0; i < n - 1; i++) {
            next[i] = i + 1;
        }
        next[n - 1] = -1;
    }
    
    void enqueue(int x, int i) {
        int idx = free;
        free = next[idx];
        
        if (front[i] == -1) {
            front[i] = idx;
        } else {
            next[rear[i]] = idx;
        }
        
        next[idx] = -1;
        rear[i] = idx;
        arr[idx] = x;
    }
    
    int dequeue(int i) {
        if (front[i] == -1) {
            return -1;
        }
        
        int idx = front[i];
        front[i] = next[idx];
        
        next[idx] = free;
        free = idx;
        
        return arr[idx];
    }
    
    bool isEmpty(int i) {
        return front[i] == -1;
    }
    
    bool isFull() {
        return free == -1;
    }
};