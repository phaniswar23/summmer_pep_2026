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

void shape(int arr[][4])
{

    for (int j = 0; j < 4; j++)
    {
        if (j % 2 == 0)
        {
            for (int i = 0; i < 4; i++)
            {
                cout << arr[i][j] << " ";
            }
        }
        else
        {
            for (int i = 3; i >= 0; i--)
            {
                cout << arr[i][j] << " ";
            }
        }
    }
}
void spiralprint(int arr2[4][4], int row, int col)
{
    int top = 0;
    int bottom = row - 1;
    int left = 0;
    int right = col - 1;

    while(top <= bottom && left <= right)
    {
        //print the top row
        for (int i = left; i <= right; i++)
        {
            cout << arr2[top][i] << " ";
        }
        top++;

        for(int i = top;i <= bottom; i++)
        {
            cout << arr2[i][right] << " ";
        }
        right--;

        for()

        
    }
}

int main()
{

    int arr[3][3] = {1, 2, 3, 7, 8, 9, 1, 1, 1};
    int arr2[4][4] = {
        {6, 11, 4, 10},
        {13, 1, 15, 2},
        {8, 12, 5, 14},
        {3, 16, 9, 7}};
    // calprint(arr);
    // maxprint(arr);
    cout << "Wave Shape: " << endl;
    shape(arr2);
    cout << "" << endl;
    cout << "Spiral Shape: " << endl;
    spiralprint(arr2,4,4);
    return 0;
}