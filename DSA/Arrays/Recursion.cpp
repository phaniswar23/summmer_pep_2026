#include<iostream>
using namespace std;

int fact(int n)
{
    if(n == 1) return 1;

    return n * fact(n-1);
}
int fib(int n)
{
    if(n == 0 || n == 1) return n;

    return fib(n - 1) + fib(n - 2);
}
bool LinearSearch(int arr,int size,int key)
{
    if()
}
int main(){
  cout <<  fact(6) << endl;
  cout << fib(9);
    return 0;
}