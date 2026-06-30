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
    if(arr[0] == key) return true;

    return LinearSearch(arr + 1,size - 1,key);
}
bool binarySearch(int arr[],int s,int e,int key)
{
    if(s <= e) return false;
    int mid = (s + e)/2;
    if(arr[mid] == key)
    {
        return true;
    }
    else if(arr[mid] < key) return binarySearch(arr,mid+1,e,key);
    else return binarySearch(arr,s,mid-1,key);
}
int main(){
//   cout <<  fact(6) << endl;
//   cout << fib(9);
  int arr[] = {3,5,1,9,4,6,8};
  int key = 4;
  int size = 7;
  cout << LinearSearch(arr,key,size);
    return 0;
}