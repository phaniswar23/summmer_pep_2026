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
}

int main(){
    int arr[] = {12,32,55,1,26,53,78};
    int key = 53;
    LinearSearch(arr[],key);
    return 0;
}