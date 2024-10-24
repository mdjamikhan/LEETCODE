class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n = candyType.size()/2;
        set<int> s;
        for(int i:candyType) s.insert(i);
        int k = s.size();
        k = min(k,n);
        return k;
    }
};