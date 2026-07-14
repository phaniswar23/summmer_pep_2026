#include<iostream>
#include <stack>
using namespace std;

int prefixEval(string s)
{
    //Create a Stack
    //Traverse string come right to left

    //if(s[i])  is operand ->st.push
    //else if it is operator->create two variables to store two elements
    //pop them and evalute with operator,then push the resultant back into stack
    
    //return last remaining element from stack;

    stack<int>st;
    int n = s.length();
    int ans = 0;
    for(int i = n - 1;i >= 0;i--)
    {
        if(s[i] >= '0' && s[i] <= '9')
        {
        st.push(s[i] - '0');
        }
        else
        {
            int op1 = st.top();
            st.pop();
            int op2 = st.top();
            st.pop();

            switch (s[i])
            {
            case '+':
                st.push(op1 + op2);
                break;
            case '-':
                st.push(op1 - op2);
                break;
            case '*':
                st.push(op1 * op2);
                break;
            case '/':
                st.push(op1 / op2);
                break;
            default:
                break;
            }
        }
        ans = st.top();
    }
    return ans;
}

int main(){
    string s = "-+7+45+20";
    cout << prefixEval(s);
    return 0;
}