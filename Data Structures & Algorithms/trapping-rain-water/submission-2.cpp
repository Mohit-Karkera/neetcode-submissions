class Solution {
public:
    int trap(vector<int>& height) {
        
        int l,r;
        int res=0;
        int area=0;
        int leftmax,rightmax;

            for(int i =1; i < height.size()-1;i++)
        {
            l=i-1;
            r=i+1;

            leftmax=height[l];
            while(l>=0)
            {   leftmax=max(leftmax,height[l]);
                l--;
            }

            rightmax=height[r];
            while(r<height.size())
            {
                rightmax=max(rightmax,height[r]);
                r++;
            } 

            area=min(rightmax,leftmax)-height[i];

            if(area>0)
                res+=area;

        }
        return res;
    }
};
