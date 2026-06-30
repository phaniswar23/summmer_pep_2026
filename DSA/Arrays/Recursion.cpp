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
bool LinearSearch(int arr[],int size,int key)
{
    if(arr[size] == key) return true;

    return LinearSearch(arr + 1,size - 1,)
}
int main(){
  cout <<  fact(6) << endl;
  cout << fib(9);
  int arr[] = {3,5,1,9,4,6,8};
  int key = 4;
    return 0;
}