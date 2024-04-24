class Solution {
public:
    int maxSubArray(vector<int>& arr) {
       
          int sum=INT_MIN;
            for(int i =0;i<arr.size();i++)
            {
                if(sum<arr[i])
                sum=arr[i];
                if(arr[i]>=0)
                {
                    if(i!=arr.size()-1)
                    arr[i+1]=arr[i]+arr[i+1];
                }
            }
            return sum;
       
         }
};