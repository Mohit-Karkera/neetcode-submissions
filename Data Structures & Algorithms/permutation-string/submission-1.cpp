class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        if(s1.size()>s2.size())
            return false;
        
        vector<int> count(26,0);

        for(char c : s1)
            count[c - 'a']++;

        int l=0;
        for(int r=0;r<s2.size();r++)
        {
           count[s2[r]-'a']--;

            if(s1.size()<r-l+1)
            {
                count[s2[l]-'a']++;
                l++;
            }

            bool check=true;
            for(int i=0;i<26;i++)
            {
                if(count[i]!=0)
                {
                    check=false;
                    break;
                }
            }

            if(check)
                return true;
        }
        return false;
    }
};
