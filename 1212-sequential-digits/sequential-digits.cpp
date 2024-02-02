class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        string res = "123456789";
        vector<int>result;

        for(int i =0;i<res.size();i++){
            for(int j =i+1;j<=res.size();j++){
                int curr = stoi(res.substr(i,j-i));
                if(curr<=high && curr>=low)result.push_back(curr);
            }
        }
        sort(result.begin(),result.end());
        return result;
         }
};