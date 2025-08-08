class Solution {
public:
    typedef long long int ll;

    long long int minValue(vector<int> &arr1, vector<int> &arr2) {
        sort(arr1.begin(), arr1.end());
        sort(arr2.rbegin(), arr2.rend()); // descending sort

        ll result = 0;
        for (int i = 0; i < arr1.size(); i++) {
            result += (ll)arr1[i] * arr2[i];
        }

        return result;
    }
};
