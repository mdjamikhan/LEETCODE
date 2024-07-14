

class Solution {
public:
    string countOfAtoms(string formula) {
        int n = formula.size();
        stack<map<string, int>> st;
        map<string, int> currentMap;
        
        for (int i = 0; i < n;) {
            if (formula[i] == '(') {
                st.push(currentMap);
                currentMap.clear();
                i++;
            } else if (formula[i] == ')') {
                i++;
                int start = i;
                while (i < n && isdigit(formula[i])) i++;
                int multiplier = (start < i) ? stoi(formula.substr(start, i - start)) : 1;

                if (!st.empty()) {
                    map<string, int> tempMap = currentMap;
                    currentMap = st.top();
                    st.pop();
                    for (auto &entry : tempMap) {
                        currentMap[entry.first] += entry.second * multiplier;
                    }
                }
            } else {
                int start = i;
                i++;
                while (i < n && islower(formula[i])) i++;
                string atom = formula.substr(start, i - start);

                start = i;
                while (i < n && isdigit(formula[i])) i++;
                int count = (start < i) ? stoi(formula.substr(start, i - start)) : 1;
                currentMap[atom] += count;
            }
        }

        map<string, int> finalMap = currentMap;
        string result;
        for (auto &entry : finalMap) {
            result += entry.first;
            if (entry.second > 1) result += to_string(entry.second);
        }
        return result;
    }
};


