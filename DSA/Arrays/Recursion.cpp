#include<iostream>
using namespace std;

int fact(int n)
{
    if(n == 1) return 1;

    return n * fact(n-1);
}
int fib(int n)
{
    if(n == 0 ) return 2;

    return fib(n - 1) + fib(n - 2);
}
int main(){
  cout <<  fact(6) << endl;
  cout << fib(3);
    return 0;
}