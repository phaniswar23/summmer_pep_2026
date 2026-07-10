#include<iostream>
using namespace std;

int main(){
    int fact  = 1 ;
    int n = 3;
    for (int i = 1; i < 4; i++)
    {
        fact = i * fact;
    }
    cout << fact << endl;
    
    return 0;
}