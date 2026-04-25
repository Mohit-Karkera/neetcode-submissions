class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int l=0;
        int r=0;
        vector <int> result;

        for(int l=0;l<temperatures.size();l++)
        {
            r=l+1;

            while(r<temperatures.size() && temperatures[l]>=temperatures[r])
                r++;

            if (r == temperatures.size())
                result.push_back(0);
            else
                result.push_back(r - l);
        }
        return result;
    }
};
