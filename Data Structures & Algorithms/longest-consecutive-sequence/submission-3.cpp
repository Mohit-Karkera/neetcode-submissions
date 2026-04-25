class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_set<int> s(nums.begin(), nums.end());
        int res = 0;

        for (auto i : s) {

            if (s.find(i - 1) == s.end()) {

                int curr = i;
                int streak = 1;

                while (s.find(curr + 1) != s.end()) {
                    curr++;
                    streak++;
                }

                res = max(res, streak);
            }
        }
        return res;
    }
};