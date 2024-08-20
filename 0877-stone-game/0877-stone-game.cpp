class Solution {
public:
    bool stoneGame(vector<int>& piles) {

        int n = piles.size();
        int sum = 0;
        int sum2 = 0;
        vector<int> dp(n, 0);

        //(piles[0]>piles[n-1])? sum+=piles[0]:sum+=piles[n-1];

        for (int i = 0; i < n - 1; i++) {
            if (piles[i] < piles[i + 1]) {
                sum += piles[i + 1];
                sum2 += piles[i];
            } else {
                sum += piles[i];
                sum2 += piles[i + 1];
            }
        }
        return sum > sum2;
    }
};