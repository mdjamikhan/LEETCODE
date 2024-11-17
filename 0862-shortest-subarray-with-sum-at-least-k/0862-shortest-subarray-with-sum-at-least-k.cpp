#include <vector>
#include <queue>
#include <climits>
using namespace std;

class Solution {
public:
    int shortestSubarray(vector<int>& nums, int k) {
        long long sum = 0;
        int mini = INT_MAX;
        priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> pq;

        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];

            if (sum >= k) {
                mini = min(mini, i + 1);
            }

            while (!pq.empty() && sum - pq.top().first >= k) {
                mini = min(mini, i - pq.top().second);
                pq.pop();
            }

            pq.push({sum, i});
        }

        return mini == INT_MAX ? -1 : mini;
    }
};
