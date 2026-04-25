class Solution {
public:
    bool isValid(string s) {
        vector<char> stack;

        for(auto i: s )
        {
            if(i=='(' || i=='{' || i=='[')
            {
                stack.push_back(i);
            }   
            
            else 
            {
                if(stack.empty())
                    return false;

                char top=stack.back();
                stack.pop_back();

                if((i==')' && top!='(') || (i=='}' && top!='{') || (i==']' && top!='[') )
                    return false;
            }   
        
        }
        return stack.empty();
    }
};
