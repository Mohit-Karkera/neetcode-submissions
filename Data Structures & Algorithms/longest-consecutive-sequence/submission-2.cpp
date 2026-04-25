class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_set<int> s(nums.begin(),nums.end());
        int curr,streak=0;
        int res=0;

        for(auto i : nums)
        {
            curr=i;
            streak=1;
            if(s.find(curr-1)!=s.end())
            {
                while(s.find(curr++)!=s.end())
                {
                    streak++;
                }
            }
            res=max(streak,res);
        }
        return res;
    }
};
