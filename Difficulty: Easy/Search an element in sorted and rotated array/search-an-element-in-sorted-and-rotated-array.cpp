int Search(vector<int> vec, int K) {
    int lo = 0, hi = vec.size() - 1;
    while (lo <= hi) {
        int mid = (lo + hi) / 2;
        if (vec[mid] == K) return mid;
        if (vec[lo] <= vec[mid]) {
            if (K >= vec[lo] && K < vec[mid]) hi = mid - 1;
            else lo = mid + 1;
        } else {
            if (K > vec[mid] && K <= vec[hi]) lo = mid + 1;
            else hi = mid - 1;
        }
    }
    return -1;
}