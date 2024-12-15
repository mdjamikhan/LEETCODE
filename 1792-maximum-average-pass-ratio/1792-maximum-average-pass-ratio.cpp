class Solution {
public:
    double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {
        // Priority queue to store {gain, {passed, total}}
        priority_queue<pair<double, pair<int, int>>> pq;

        // Lambda to calculate the gain for adding one extra student
        auto gain = [](int pass, int total) {
            return (double)(pass + 1) / (total + 1) - (double)pass / total;
        };

        // Push all classes into the priority queue with their initial gain
        for (const auto& c : classes) {
            int pass = c[0], total = c[1];
            pq.push({gain(pass, total), {pass, total}});
        }

        // Distribute extra students
        while (extraStudents--) {
            auto [currentGain, classInfo] = pq.top();
            pq.pop();
            int pass = classInfo.first, total = classInfo.second;
            // Update the class with one extra student
            pq.push({gain(pass + 1, total + 1), {pass + 1, total + 1}});
        }

        // Calculate the final average
        double sum = 0.0;
        while (!pq.empty()) {
            auto [_, classInfo] = pq.top();
            pq.pop();
            int pass = classInfo.first, total = classInfo.second;
            sum += (double)pass / total; // Ensure floating-point division
        }

        return sum / classes.size();
    }
};
