#include<iostream>
using namespace std;
bool search(int arr[][3],int row,int col,int target)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if(arr[i][j] == target){
            return true;
            }
        }

        
    }
    return false;
}

//Calculate and print sum of every row
void calprint(int arr[3][3])
{
   
    for (int i = 0; i < 3; i++){
    int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum += arr[i][j];
        }
        cout << sum << endl;
    }

    
}
//print thr value of max sum and also its index
void maxprint(int arr[3][3])
{
   int maxi = 0;
   int ine
    for (int i = 0; i < 3; i++){
    int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum += arr[i][j];
            maxi = max(maxi,sum);

        }
        
        
        
    }
    cout << "Max Sum" << maxi << endl;
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

        calprint(arr);
        maxprint(arr);
    
    return 0;
}