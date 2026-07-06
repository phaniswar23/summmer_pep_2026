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
    if(head == NULL)
    {
        head = newNode;
        head->next = head;
        return;
    }
    Node* temp = head;
    
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->next = head;
    
}
void insertAtBeg(Node* &head,int val)
{
    if(head == NULL) return;
    Node* temp = head;
    tem = val;
}
int main(){
    
    return 0;
}