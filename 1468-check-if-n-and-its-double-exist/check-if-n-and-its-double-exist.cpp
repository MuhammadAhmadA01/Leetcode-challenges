class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
       sort(arr.begin(), arr.end());
        int i=0, j=0, n=arr.size();
        while (i<n && j<n) {
            while (j<n && arr[j] < 2*arr[i]) j++;
            if (! (j<n)) break;
            if (arr[j] == 2*arr[i] && i!=j) return true;
            i++;
        }
        return false; 
    }
};