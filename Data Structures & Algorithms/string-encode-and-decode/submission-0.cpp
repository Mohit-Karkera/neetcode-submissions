class Solution {
public:

    string encode(vector<string>& strs) {
      string result_string="";
      for(auto &i : strs){
      result_string += to_string(i.size())+"#"+i;
      }
      return result_string;
    }


    vector<string> decode(string s) {
      vector<string> result;
         int i = 0;
     while(i<s.size()){
       int j=i;
       while(s[j]!='#'){
        j++;
       }
       int len=stoi(s.substr(i,j-i));

       string word = s.substr(j + 1, len);
       result.push_back(word);

       i=j+1+len;
     }  
     return result;
    }
};