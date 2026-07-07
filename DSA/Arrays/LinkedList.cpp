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

// Insert at End
void insertAtEnd(Node* &head, int val)
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

// Insert at Beginning
void insertAtBeg(Node* &head, int val)
{
    Node* node = new Node(val);

    node->next = head;
    head = node;
}

// Insert at Position
void insertAtPosition(Node* &head, int pos, int val)
{
    if(pos <= 0)
    {
        cout << "Invalid Position" << endl;
        return;
    }

    Node* node = new Node(val);

    if(pos == 1)
    {
        node->next = head;
        head = node;
        return;
    }

    Node* temp = head;

    for(int i = 1; i < pos - 1 && temp != NULL; i++)
    {
        temp = temp->next;
    }

    if(temp == NULL)
    {
        cout << "Invalid Position" << endl;
        delete node;
        return;
    }

    node->next = temp->next;
    temp->next = node;
}

// Delete Last Node
void deleteNodeatLast(Node* &head)
{
    if(head == NULL)
    {
        cout << "List is Empty" << endl;
        return;
    }

    if(head->next == NULL)
    {
        delete head;
        head = NULL;
        return;
    }

    Node* temp = head;

    while(temp->next->next != NULL)
    {
        temp = temp->next;
    }

    delete temp->next;
    temp->next = NULL;
}
//Delete at Beginning
void deleteAtBeg(Node* &head)
{
    if(head == NULL) return ;

    Node* temp = head;
    head = head->next;
    delete temp;
}

//Delete at Pos
void deleteAtPos(Node* &head,int pos)
{
    
}

// Print Linked List
void printList(Node* head)
{
    Node* temp = head;

    while(temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL" << endl;
}

int main()
{
    Node* head = NULL;

    insertAtEnd(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);

    cout << "After Insert at End: ";
    printList(head);

    insertAtBeg(head, 5);

    cout << "After Insert at Beginning: ";
    printList(head);

    insertAtPosition(head, 3, 15);

    cout << "After Insert at Position 3: ";
    printList(head);

    deleteNodeatLast(head);

    cout << "After Delete Last Node: ";
    printList(head);
    
    deleteAtBeg(head);
    cout << "After Delete First Node: ";
    printList(head);
    return 0;
}
/*
Insert at 
*/