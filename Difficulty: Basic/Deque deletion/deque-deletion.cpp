// Function to erase the element from specified position x in deque.
void eraseAt(deque<int> &deq, int x) {
    if (x >= 0 && x < deq.size()) {
        deq.erase(deq.begin() + x);
    }
}

// Function to erase the elements in range start (inclusive), end (exclusive).
void eraseInRange(deque<int> &deq, int start, int end) {
    if (start >= 0 && end <= deq.size() && start < end) {
        deq.erase(deq.begin() + start, deq.begin() + end);
    }
}

// Function to erase all the elements in the deque.
void eraseAll(deque<int> &deq) {
    deq.clear();
}
