#include<iostream>
#include<string>
#include <algorithm>
using namespace std;

string reverse(string s)
{
    int st = 0;
    int ed = s.length() - 1;
    while(s < e)
    {
        swap(str[s],str[e]);
        s++;
        e--;
    }
    
    
}

int main(){
    string str1 = "Hello";
    string str2 = "hello";
    
    if(str1 == str2) cout << "SAME" << endl;
    else cout << "NOT SAME" << endl;
    
    
    
    return 0;
}