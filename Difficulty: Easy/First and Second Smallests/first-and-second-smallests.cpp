class Solution {
  public:
    vector<int> minAnd2ndMin(vector<int> &arr) {
        int first = INT_MAX, second = INT_MAX;

        for (int x : arr) {
            if (x < first) {
                second = first;
                first = x;
            }
            else if (x > first && x < second) {
                second = x;
            }
        }

        if (second == INT_MAX)
            return {-1};

        return {first, second};
    }
};