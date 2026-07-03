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
void printevenlist(Node* head)
{
    
    Node* temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
void insertAtPosition(Node* &head,int pos,int val)
{
    Node* node = new Node(val);
    if(pos == 1)
    {
        node->next = head;
        head = node;
        return;
    }
    Node* temp = head;

    for (int i = 1; i < pos - 1 && temp != NULL; i++)
    {
        temp = temp->next;
    }
    node->next = temp->next;
    temp->next = node;
    
}
int main(){
    Node* head = new Node(10);
    
    return 0;
}