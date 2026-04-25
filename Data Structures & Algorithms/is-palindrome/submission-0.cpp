class Solution {
public:
    bool isPalindrome(string s) {
        string str;
        for(auto &i : s){
        
            if(isalnum(i))
            str+=tolower(i);
        }
        int n=str.size();
        int k=0;
        while( k<(n/2)){
            if(str[k]!=str[n-k-1])
            return false;

            k++;
        }
        if(k==n/2)
        return true;

   }
};
