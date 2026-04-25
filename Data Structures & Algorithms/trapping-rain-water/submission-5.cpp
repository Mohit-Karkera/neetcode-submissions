class Solution {
public:
    int trap(vector<int>& height) {
        
        int n =height.size();
        int area=0,res=0;
        vector<int> rightmax(n);
        vector<int> leftmax(n);


        leftmax[0]=height[0];
        for(int i=1;i<n;i++)
        {
            leftmax[i]=max(height[i],leftmax[i-1]);
        }   

        rightmax[n-1]=height[n-1];
        for(int i=n-2;i>=0;i--)
        {
            rightmax[i]=max(height[i],rightmax[i+1]);
        }   


        for(int i =0 ; i<height.size();i++)
        {
            area=min(rightmax[i],leftmax[i])-height[i];
            if(area>0)
                res+=area;

        }

        
        return res;
    }
};
