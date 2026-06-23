#include<iostream>
using namespace std;

void func1()
{
    cout << "This is Void Function" << endl;
    
}
void doubleThevalue(int num)
{
    num *= 2;
    cout << "Inside: " << num << endl;
    
}

int main(){
    int num = 10;
    doubleThevalue(num);
    cout << "" << endl;
    
    return 0;
}