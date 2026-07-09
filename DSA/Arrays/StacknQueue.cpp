#include <iostream>
using namespace std;

class myStack
{
public:
    int *arr;
    int top;
    int size;
    myStack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }
    void push(int val)
    {
        if (top == size - 1)
        {
            cout << "Stack overflow" << endl;
        }
        top++;
        arr[top] = val;
    }
};

int main()
{
    myStack
    return 0;
}