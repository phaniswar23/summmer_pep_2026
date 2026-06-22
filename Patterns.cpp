#include<iostream>
using namespace std;

int main(){
    for (id_t i = 0; i < 5; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*" << " " << endl;
        }
        cout << "" << endl;
        
    }
    
    return 0;
}