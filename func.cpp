#include<iostream>
using namespace std;

void func1()
{
    cout << "This is Void Function" << endl;
    
}
void doubleThevalue(int num)
{
    num *= 2;
    cout << "Inside: " << endl;
    
}

int main(){
    func1();
    return 0;
}