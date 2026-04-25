class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {        
     unordered_map<string,vector<string>> m;
     vector<vector<string>> result;  
     for( auto& s: strs){ 
            string sorted = s;
            sort(sorted.begin(),sorted.end());
            m[sorted].push_back(s);
      }
      for(auto &i : m){
            result.push_back(i.second);
      }
            return result;
    }
};
