class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        sort(nums.begin(),nums.end());
        vector<vector<int>> res;

        int n= nums.size();
        int l,r;
        int sum=0;

        for(int i =0;i<n-2;i++)
        {
            if(i>0 && nums[i]==nums[i-1])continue;
            
            l=i+1;
            r=n-1;

            while(l<r)
            {
                sum=nums[l]+nums[r];          

                if(sum<-nums[i])
                    l++;

                else if(sum>-nums[i])
                    r--;
                
                else
                {
                    res.push_back({nums[i],nums[l],nums[r]});
                    while (l < r && nums[l] == nums[l+1]) l++;
                    while (l < r && nums[r] == nums[r-1]) r--;
            
                    l++;
                    r--;
                }
            }

        }
        return res;
    }
};