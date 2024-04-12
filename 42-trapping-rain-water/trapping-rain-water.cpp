class Solution {
public:
    int trap(vector<int>& height) {
        int l=0,r=height.size()-1,count=0;
        int leftMax=height[0],rightMax=height[r];
        while(l<r)
        {
            if(leftMax<rightMax)
            {
                l++;
                leftMax=max(leftMax,height[l]);
                count=count+leftMax-height[l];
            }
            else
            {
                r--;
                rightMax=max(rightMax,height[r]);
                count=count+rightMax-height[r];
            }
        }
        return count;
    }
};