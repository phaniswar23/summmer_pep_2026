#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    Node(int val)
    {
        data = val;
        
    }
};

int main(){
    Node* head = new Node(1);
    return 0;
}