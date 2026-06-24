#include<iostream>
using namespace std;

int LinearSearch(int arr[],int key)
{

    int n = arr.size();
    for(int i = 0;i < n;i++)
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
}

int main(){
    int arr[] = {12,32,55,}
    return 0;
}