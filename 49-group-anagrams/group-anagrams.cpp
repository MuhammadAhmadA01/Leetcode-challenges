class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> m;
        vector<vector<string>> s;
            
        if(strs.size()<2)
        {
            s.push_back(strs);
            return s;
        }
        for(auto i: strs)
        {
            string temp=i;
            sort(temp.begin(),temp.end());
            m[temp].push_back(i);
        }
        for(auto i: m)
        {
               s.push_back(i.second); 
        }
    return s;

    }
};