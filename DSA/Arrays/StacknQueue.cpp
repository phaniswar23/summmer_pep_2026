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
            cout << "Stack Overflow" << endl;
            return;
        }

        top++;
        arr[top] = val;
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "Stack Underflow" << endl;
            return;
        }

        top--;
    }

    int peek()
    {
        if (top == -1)
        {
            cout << "Stack is Empty" << endl;
            return -1;
        }

        return arr[top];
    }

    

    
};

int main()
{
    myStack s1(5);

    s1.push(10);
    s1.push(20);
    s1.push(30);


    return 0;
}