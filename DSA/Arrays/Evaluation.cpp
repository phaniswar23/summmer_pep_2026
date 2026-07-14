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
    for(int i = n - 1;i  < 0;i--)
    {
        st.push(s[i]);
    }
}

int main(){
    string s = "-+7+45+20";
    return 0;
}