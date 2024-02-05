class Solution {
public:
    int maxDiff(int num) {
        if (num < 10) {
            return 8;
        }
        int i;

        string s1 = to_string(num);
        for (i = 0; i < s1.size(); i++) {
            if (s1[i] != '9') {
                break;
            }
        }
        if (i < s1.size()) {
            char first = s1[i];
            for (int i = 0; i < s1.size(); i++) {
                if (s1[i] == first) {
                    s1[i] = '9';
                }
            }
        }
        int a = stoi(s1);

        string s2 = to_string(num);
        for (i = 0; i < s2.size(); i++) {
            if (s2[i] != '0' && s2[i] != '1') {
                break;
            }
        }
        if (i < s2.size()) {
            char first = s2[i];
            char r = '0';
            if (s2[0] == first) {
                r = '1';
            }
            for (int i = 0; i < s2.size(); i++) {
                if (s2[i] == first) {
                    s2[i] = r;
                }
            }
        }
        int b = stoi(s2);

        return a - b;
    }
};