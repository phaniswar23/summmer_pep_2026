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
        next = NULL;
    }
};

int main(){
    Node* node1 = new Node(1);
    Node* node2 = new Node(1);
    return 0;
}