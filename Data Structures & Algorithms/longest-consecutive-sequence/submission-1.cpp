class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_set<int> s(nums.begin(),nums.end());
        int curr=0,streak=0;
        int res=0;

        for(auto i : nums)
        {
            curr=i;
            streak=0;

            while(s.find(curr)!=s.end())
            {
                streak++;
                curr++;
            }
            res=max(streak,res);
        }
    return res;

    }
};
