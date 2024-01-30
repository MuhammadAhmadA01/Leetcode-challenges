class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> operands;
        for(int i =0;i<tokens.size();i++)
        {
            if(tokens[i]!="+"&&tokens[i]!="*"&&tokens[i]!="-"&&tokens[i]!="/")
            {
                operands.push(stoi(tokens[i]));
            }
            else
            {
                int top=operands.top();
                operands.pop();
                int newTop=operands.top();
                operands.pop();
                   if(tokens[i]=="+")
                        operands.push(newTop+top);
                    else
                    if(tokens[i]=="*")
                        operands.push(newTop*top);
                    else
                    if(tokens[i]=="-")
                        operands.push(newTop-top);
                    else
                        operands.push(newTop/top);

            }
        }
        return operands.top();
    }
};