class Solution {
public:
    vector<int> getDigitDiff1AndLessK(vector<int>& arr, int k) {
        vector<int> ans;

        for (int num : arr) {
            if (num >= k || num < 10)
                continue;

            int temp = num;
            bool valid = true;

            while (temp >= 10) {
                int lastDigit = temp % 10;
                int secondLastDigit = (temp / 10) % 10;

                if (abs(lastDigit - secondLastDigit) != 1) {
                    valid = false;
                    break;
                }

                temp /= 10;
            }

            if (valid)
                ans.push_back(num);
        }

        return ans;
    }
};
