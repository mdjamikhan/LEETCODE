#include <vector>
#include <utility>
#include <queue>
#include <algorithm>
#include <limits>

using namespace std;

class Solution {
public:
    double mincostToHireWorkers(vector<int>& quality, vector<int>& wage, int k) {
        // Create a vector of pairs to store wage-to-quality ratio and quality of each worker
        vector<pair<double, int>> ans;
        int n = quality.size();

        // Calculate wage-to-quality ratio for each worker and store in ans
        for(int i = 0; i < n; i++) {
            ans.push_back({(double) wage[i] / quality[i], quality[i]});
        }

        // Sort the workers by their wage-to-quality ratio
        sort(ans.begin(), ans.end());

        // Initialize minimum cost to a very large value
        double mini = numeric_limits<double>::max();
        int sum = 0;
        priority_queue<int> res; // Store quality of selected workers
        for(int i = 0; i < k; i++) {
            res.push(ans[i].second);
            sum += ans[i].second;
        }

        // Calculate initial minimum cost
        double prod = ans[k - 1].first;
        mini = prod * sum;

        // Iterate through remaining workers
        for(int i = k; i < n; i++) {
            prod = ans[i].first;
            sum += ans[i].second;
            res.push(ans[i].second);
            
            // Remove the worker with highest quality if more than k workers are selected
            if(res.size() > k) {
                sum -= res.top();
                res.pop();
            }

            // Update minimum cost
            mini = min(mini, prod * sum);
        }

        return mini;
    }
};
