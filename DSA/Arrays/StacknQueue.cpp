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
    void pop(int val)
    {
        if(top <= -1)
        {
            
        }
    }
};

int main()
{
    myStack s1(5);
    s1.push(1);

}