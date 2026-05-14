class Solution {
public:
    int findMin(vector<int> &nums) {
        
        int result=nums[0];

        for(int i =0;i<nums.size();i++)
        {
            result=min(result,nums[i]);
        }
        return result;
    }
};
