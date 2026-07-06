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
void insertAtEnd(Node* &head,int val)
{
    Node* newNode = new Node(val);
    Node* temp = head;
    while (temp->next != head)
    {

    }
    {
        /* code */
    }
    
}
int main(){
    
    return 0;
}