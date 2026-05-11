class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> result;

        for(int l=0;l<nums.size();l++)
        {
            int r=l+k-1;
            if(r==nums.size())
                break;
            int max=nums[l];
            for(int i =l;i<k+l;i++)
                {
                    if(max<nums[i])
                        max=nums[i]; 

                }
            result.push_back(max);
        }
        return result;
    }
};
