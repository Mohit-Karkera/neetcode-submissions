class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int,int> m;

        for(int i=0;i<numbers.size();i++){

           int c=target-numbers[i];

           if(m.find(c)!=m.end()){
            if(m[c]<i)
            return {m[c]+1,i+1};

            return {i+1,m[c]+1};
           }
           m[numbers[i]]=i; 
        }

        return {};
    }
};
