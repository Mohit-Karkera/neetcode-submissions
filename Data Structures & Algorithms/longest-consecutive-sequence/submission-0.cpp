class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
             unordered_set<int>  store(nums.begin(),nums.end());
             int res=0;

             for(auto num : store)
             {
                if(store.find(num-1)==store.end())
                {
                    int lenght=1;
                    while(store.find(num+lenght)!=store.end()){
                        lenght++;
                        
                    }
                    res=max(res,lenght);
                }
                
             }  
             return res; 
    } 
};