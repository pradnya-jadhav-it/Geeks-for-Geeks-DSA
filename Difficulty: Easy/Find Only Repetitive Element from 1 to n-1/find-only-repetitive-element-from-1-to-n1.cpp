class Solution {
  public:
    int findDuplicate(vector<int>& arr) {
        unordered_set<int> st;

        for (int x : arr) {
            if (st.count(x))
                return x;
            st.insert(x);
        }

        return -1;
    }
};