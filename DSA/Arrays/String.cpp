#include<iostream>
using namespace std;
void reverseString(string str)
{
    stack<string> st;
    for (int i = 0; i < str.length(); i++)
    {
        string ans = " ";
        while(str[i] != ' ' && i < str.length())
        {
            ans += str[i];
            i++;
        }
        str.push()
    }
    
}
int main(){
    
    return 0;
}