#include<iostream>
using namespace std;

int main(){
    char grade = 'A';
    switch (grade)
    {
    case 'A':
        cout << "Excellent" << endl;
    case 'B':
        cout << "Goodd" << endl;
    case 'C':
        cout << "Averagess" << endl;
    default:
        cout << "Invalid" << endl;
    }
    return 0;
}