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
    Node* node = new Node(val);
    if(head == NULL)
    {
        head = node;
        return;
    }
    Node* temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = node;
}

void insertAtBeg(Node* &head,int val)
{
    Node* node = new Node(val);
    head = node;
    node->next = head;
}
void printevenlist(Node* head,int val)
{
    Node* node = new Node(val);
    while (temp-next != NULL)
    {
        if(head->data % 2 == 0)
        {
            cout << node->data;
        }
        node->next;
    }
    
}
int main(){
    Node* head = new Node(10);
    
    return 0;
}