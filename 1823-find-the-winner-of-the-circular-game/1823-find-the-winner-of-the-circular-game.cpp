class Solution {
public:
    int findTheWinner(int n, int k) {
        int win=1;

        for(int i=2;i<=n;i++)
        {
            win=(win+(k-1))%i+1;
        }
        return win;
    }

};