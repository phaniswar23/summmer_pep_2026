#include<iostream>
#include<string>
using namespace std;

string reverse(string s)
{
    int s = 0;
    int e = s.size() - 1;
    while(s < e)
    {
        swap(str[s],str[e]);
        
    }
    
    
}

int main(){
    string str1 = "Hello";
    string str2 = "hello";
    
    if(str1 == str2) cout << "SAME" << endl;
    else cout << "NOT SAME" << endl;
    
    
    
    return 0;
}