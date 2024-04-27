#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
int dis(int curr,int next,int ring){
    int front=abs(next-curr);
    int back=abs(ring-front);
    return min(front,back);
}
    int solve(int ringIndex, int keyIndex,  string& ring,  string& key, vector<vector<int>>& dp) {
        if (keyIndex == key.size()) return 0;
       
        if (dp[ringIndex][keyIndex] != -1) return dp[ringIndex][keyIndex];
        
        int minStep = INT_MAX;
        for(int i=0;i<ring.size();i++)
        {
            if(ring[i]==key[keyIndex])
            {
                int total=dis(ringIndex,i,ring.size())+1+solve(i,keyIndex+1,ring,key,dp);
                minStep=min(minStep,total);
            }
        }
        return dp[ringIndex][keyIndex]=minStep;
        
       
        
        //return dp[i][j] = minStep;
    }
    
    int findRotateSteps(string ring, string key) {
        int n = ring.size();
        int m = key.size();
        vector<vector<int>> dp(n, vector<int>(m, -1));
        return solve(0, 0, ring, key, dp) ;
    }
};
