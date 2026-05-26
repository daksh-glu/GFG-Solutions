class Solution {
public:
    int minToggle(vector<int>& arr) {
        int zerosRight = 0;

        for(int x : arr) {
            if(x == 0)
                zerosRight++;
        }

        int onesLeft = 0;
        int ans = zerosRight;

        for(int x : arr) {
            if(x == 1)
                onesLeft++;
            else
                zerosRight--;

            ans = min(ans, onesLeft + zerosRight);
        }

        return ans;
    }
};