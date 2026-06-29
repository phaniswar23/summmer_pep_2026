#include<iostream>
using namespace std;

int LinearSearch(int arr[],int key)
{
    for(int i = 0;i < 8;i++)
    {
        if(arr[i] == key)
        {
            if(key > 20)
            {
                return key * 2;
            }
            else
            {
                return key % 2;
            }
        }
    }
    return -1;
}
int BinarySearch(int arr[], int n, int key)
{
    int low = 0;
    int high = n - 1;

    while(low <= high)
    {
        int mid = (low + high) / 2;

        if(arr[mid] == key)
            return mid;

        else if(arr[mid] < key)
            low = mid + 1;

        else
            high = mid - 1;
    }

    return -1;
}
int main(){
    int arr[] = {12,32,55,1,26,53,78};
    int key = 53;
    int n = sizeof(arr) / sizeof(arr[0]);
   cout<< LinearSearch(arr,key) << endl;
   cout<< BinarySearch(arr,n,key);
    return 0;
}