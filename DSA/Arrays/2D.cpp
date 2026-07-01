#include <iostream>
using namespace std;
bool search(int arr[][3], int row, int col, int target)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j] == target)
            {
                return true;
            }
        }
    }
    return false;
}

// Calculate and print sum of every row
void calprint(int arr[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum += arr[i][j];
        }
        cout << sum << endl;
    }
}
// print thr value of max sum and also its index
void maxprint(int arr[3][3])
{
    int maxi = 0;
    int index;
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum += arr[i][j];
        }
        if (sum > maxi)
        {
            maxi = sum;
            index = i;
        }
    }
    cout << "Max SUM is : " << maxi << " AT ROW INDEX" << " " << index << endl;
}


void shape(int arr)
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            /* code */
        }
        
    }
    
}
int main()
{

    int arr[3][3] = {1, 2, 3, 7, 8, 9, 1, 1, 1};

    calprint(arr);
    maxprint(arr);

    return 0;
}