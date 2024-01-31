class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        
          vector<int> ans(temperatures.size(),0);
        stack<pair<int,int>> stk;
        for( int i = 0 ; i < temperatures.size() ; i++){
            int t = temperatures[i];
            while(stk.empty()==false && t>stk.top().first){
                pair<int,int> temp = stk.top();
                stk.pop();
                ans[temp.second]=(i-temp.second);
            }
            stk.push({t,i});
        }
        return ans;
           }
};