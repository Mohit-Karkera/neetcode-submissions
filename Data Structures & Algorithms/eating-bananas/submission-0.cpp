class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {

        int l=1;
        int r=*max_element(piles.begin(),piles.end());
        int result=1;
    
        
        while(l<=r)
        {
            const int mid=l+(r-l)/2;
            int totalTime=0;
            for(auto i : piles)
            {
                totalTime+=ceil(static_cast<double>(i)/mid);
            }
            if(totalTime<=h)
            {
                result=mid;
                r=mid-1;
            }
            else
                l=mid+1;

        }
        return result;
    }
};
