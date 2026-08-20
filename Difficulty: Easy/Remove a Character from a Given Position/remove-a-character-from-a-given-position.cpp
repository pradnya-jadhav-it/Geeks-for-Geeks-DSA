class Solution {
  public:
    string removeCharacter(string &s, int pos) {
        s.erase(pos, 1);
        return s;
    }
};