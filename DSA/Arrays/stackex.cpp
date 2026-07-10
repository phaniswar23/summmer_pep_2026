#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> st;
    stack<int> temp;
    st.push(10);
    st.push(20);
    st.push(30);

    while (!st.empty()) {
        temp.push(st.top());
        st.pop();
    }
    while (!temp.empty())
    {
        cout << temp.top() << " ";
        temp.pop();
    }
    
    return 0;
}