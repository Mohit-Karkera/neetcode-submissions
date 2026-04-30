class Solution {
    public:
        int largestRectangleArea(vector<int>& heights) {

            int res=0;

            for(int i= 0 ;i <heights.size();i++)
            {
                int small=heights[i];

                for(int j=i;j>=0;j--)
                {
                    small=min(small,heights[j]);
                    int area=(i-j+1)*small;
                    res=max(res,area);
                }
            }
            return res;    
        }                 
};