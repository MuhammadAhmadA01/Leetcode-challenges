class Solution {
public:
    int bestClosingTime(string customers) {
     int max=INT_MIN;
     int profit=0;
     int idx=0;
        for(int i =0;i<customers.length();i++)
        {
            if(customers[i]=='Y')
            {
                profit++;
                if(profit>max && profit>0)
                {
                    max=profit;
                    idx=i+1;
                }
            }
            else
            profit--;
        }
        return idx;
    }
};