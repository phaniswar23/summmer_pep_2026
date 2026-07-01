#include<iostream>
using namespace std;
void printevencol(int arr[][3],int row,int col,int target)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if(arr[i][]){
            cout << arr[i][j]  << " ";
            }
        }
        cout << "" << endl;
        
        
    }
}
int main(){
    
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};
    // cout<<"Enter values of arr" << endl;
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         cin >> arr[i][j];
    //     }
        
    // }

    cout << "Output" << endl;
    printevencol();

    
    return 0;
}