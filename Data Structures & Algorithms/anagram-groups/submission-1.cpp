class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        vector<vector<string>> result;
        unordered_map<string,vector<string>> mp;

        for(auto s : strs)
        {
            string sortedS=s;
            sort(sortedS.begin(),sortedS.end());
            mp[sortedS].push_back(s);
        } 

        for(auto i : mp)
        {
            result.push_back(i.second);
        }
    return result;
    }
};
