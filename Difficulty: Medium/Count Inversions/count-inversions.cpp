class Solution {
public:
    int merge(vector<int> &arr, int l, int mid, int r) {
        vector<int> temp;
        int i = l, j = mid + 1;
        int count = 0;
        while (i <= mid && j <= r) {
            if (arr[i] <= arr[j]) {
                temp.push_back(arr[i++]);
            } else {
                count += (mid - i + 1);
                temp.push_back(arr[j++]);
            }
        }
        while (i <= mid) temp.push_back(arr[i++]);
        while (j <= r) temp.push_back(arr[j++]);
        for (int k = l; k <= r; k++) arr[k] = temp[k - l];
        return count;
    }

    int mergeSort(vector<int> &arr, int l, int r) {
        int count = 0;
        if (l < r) {
            int mid = (l + r) / 2;
            count += mergeSort(arr, l, mid);
            count += mergeSort(arr, mid + 1, r);
            count += merge(arr, l, mid, r);
        }
        return count;
    }

    int inversionCount(vector<int> &arr) {
        return mergeSort(arr, 0, arr.size() - 1);
    }
};