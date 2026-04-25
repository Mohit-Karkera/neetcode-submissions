class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int,int> m;
    for(auto &i : nums){
            m[i]++;
       }
    vector<pair<int,int>> v;
    for(auto &i : m){
          v.push_back({i.second,i.first});
    }
    sort(v.rbegin(),v.rend());

    vector<int> res;
    for(int i=0;i<k;i++){
         res.push_back({v[i].second});
     }
     return res;
    }
  };
