#include<iostream>
using namespace std;

int main(){
    // test
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
        cout << "Invaliddd" << endl;
    }
    return 0;
}