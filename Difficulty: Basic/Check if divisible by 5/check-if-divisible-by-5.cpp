class Solution {
  public:
    bool divisibleBy5(string &n) {
        char last = n[n.size() - 1];

        return (last == '0' || last == '5');
    }
};