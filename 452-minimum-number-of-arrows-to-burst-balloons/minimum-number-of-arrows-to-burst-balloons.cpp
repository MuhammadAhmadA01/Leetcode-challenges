class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
      if(points.size()<2)
          return points.size();
      sort(points.begin(),points.end());
      int count=1;
      int endPoint=points[0][1];
      for(auto i: points)
      {
          if(i[0]>endPoint)
          {
              count++;
              endPoint=i[1];
          }
          if(i[1]<endPoint)
          endPoint=i[1];
      }  
      return count;
    }
};