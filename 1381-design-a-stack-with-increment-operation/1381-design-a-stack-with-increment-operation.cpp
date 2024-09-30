class CustomStack {
public:
    ;
    int maxi;
    vector<int> ans;
    CustomStack(int maxSize) {
        this->maxi = maxSize;
        ans.reserve(maxi);
    }

    void push(int x) {
        if (ans.size() < maxi)
            ans.push_back(x);
    }

    int pop() {
        if (!ans.empty()) {
            int k = ans.back();
            ans.pop_back();
            return k;
        }
        return -1;
    }

    void increment(int k, int val) {
        //  int mini=min(k,ans.size());
        int n = ans.size();
        if (n > k) {
            for (int i = 0; i < k; i++) {

                ans[i] += val;
            }
        } else {
            for (int i = 0; i < ans.size(); i++) {
                ans[i] += val;
            }
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */