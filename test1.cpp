#include<iostream>
using namespace std;

int main(){
    char grade = 'A';
    switch (grade)
    {
    case 'A':
        cout << "Excellent" << endl;
    case 'B':
        cout << "" << endl;
    case 'C':
        cout << "Excellent" << endl;
        
    
    default:
        break;
    }
    return 0;
}