#include<iostream>
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
    for(int i = n - 1;i >= 0;i--)
    {
        if(s[i] >= '0' && s[i] <= '9')
        {
         st.push(s[i] = '0');
        }
        else
        {
            int op1 = st.top();
            st.pop();
            int op2 = st.top();
        }
        
    }

}

int main(){
    string s = "-+7+45+20";
    return 0;
}