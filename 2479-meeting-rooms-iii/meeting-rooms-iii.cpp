class Solution {
public:
    int mostBooked(int n, vector<vector<int>>& meetings) {
         int len=size(meetings);
        vector<long long>endTime(n,0);
        vector<int>count(n,0);
        sort(meetings.begin(),meetings.end());
        for(int i=0;i<len;i++){
            int start=meetings[i][0];
            int time=meetings[i][1]-start;
            bool isDelay = true;
            long long minDelay=LLONG_MAX;
            int indx;
            for(int j=0;j<n;j++){
                if(endTime[j]<=start){
                    endTime[j]=meetings[i][1];
                    count[j]++;
                    isDelay = false;
                    break;
                }else{
                    if(endTime[j]<minDelay){
                        minDelay=endTime[j];
                        indx=j;
                    }
                }
            }
            if(isDelay){
                endTime[indx]+=time;
                count[indx]++;
            }
        }
        
        int ans=0;
        for(int i=0;i<n;i++){
            cout<<count[i]<<" ";
            if(count[i]>count[ans]){
                ans =i;
            }
        }
        return ans;
    }
};