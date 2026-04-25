class Solution {
public:
    int maxArea(vector<int>& heights) {
        
    int l=0;
    int r=heights.size()-1;
    int size;
    int res=0;

    while(l<r)
    {
        size=(r-l)*min(heights[l],heights[r]);

        if(heights[l]<heights[r])
            l++;
    
        else
            r--;

        res=max(res,size);

    }

        return res;
    }
};
