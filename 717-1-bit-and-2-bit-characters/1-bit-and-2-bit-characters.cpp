class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
    int i = 0;
    while (i < bits.size() - 1) 
        i += 1 + bits[i];
        return i != bits.size();
    }
};