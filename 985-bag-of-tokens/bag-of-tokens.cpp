class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(), tokens.end());
        int score = 0;
        int maxi = 0;
        int left = 0, right = tokens.size() - 1;
        while (left <= right) {
            if (power >= tokens[left]) {
                power -= tokens[left];
                score++;
                left++;
                maxi = max(maxi, score);
            } else if (score > 0) {
                power += tokens[right];
                score--;
                right--;
            } else
                break;
        }

        return maxi;
    }
};