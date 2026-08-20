class Solution {
public:
    int lengthString(string &s) {
        int count = 0;

        for(int i = 0; s[i] != '\0'; i++) {
            count++;
        }

        return count;
    }
};