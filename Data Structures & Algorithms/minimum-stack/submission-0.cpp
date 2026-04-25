class MinStack {
private:
    vector<int> st;
    vector<int> minSt;

public:
    MinStack() {}

    void push(int val) {
        st.push_back(val);

        if (minSt.empty() || val <= minSt.back())
            minSt.push_back(val);
        else
            minSt.push_back(minSt.back());
    }

    void pop() {
        if (!st.empty()) {
            st.pop_back();
            minSt.pop_back();
        }
    }

    int top() {
        return st.back();
    }

    int getMin() {
        return minSt.back();
    }
};