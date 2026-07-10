#include<iostream>
using namespace std;
class MyQueue
{
    public:
    int *arr;
    int front;
    int rear;
    int size;
    MyQueue(int size)
    {
        this->size = size;
        arr = new int(size);
        front = -1;
        rear = -1;
    }
    void enqueue(int val)
};
int main(){
    
    return 0;
}