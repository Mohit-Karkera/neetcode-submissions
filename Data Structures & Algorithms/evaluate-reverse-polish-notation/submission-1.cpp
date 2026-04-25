class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stack;
        for(auto i : tokens)
        {
            if(i=="+" || i=="-" || i=="*" || i=="/")
            {
                int b=stack.top();
                        stack.pop();
                int a=stack.top();
                        stack.pop();                
                switch(i[0])
                {
                    case '+': stack.push(a+b);
                                break;
                    case '-': stack.push(a-b);
                                break;
                    case '*':
                              stack.push(a*b);
                                break;
                    case '/': stack.push(a/b);
                                break;
                    default : break; 
                }
                
            }
            else
            {
                stack.push(stoi(i));
            }
                
        }
        return stack.top();
    }
};
