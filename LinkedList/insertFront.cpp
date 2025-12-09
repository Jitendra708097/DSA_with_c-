// Inserting new element at the beginning of the linked list.
#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    Node(int data)
    {
        this->data = data;
        next = nullptr;
    }
};

Node *insertBeginning(Node *head, int data)
{
    Node* newElement = new Node(data);
    newElement->next = head;
    return newElement;
}

void printLinkedList(Node *head)
{
    Node *temp = head;
    while (temp)
    {
        cout << "The value: " << temp->data << endl;
        temp = temp->next;
    }
}

int main()
{
    Node *head = new Node(2);
    head->next = new  Node(5);
    int x = 1;
    insertBeginning(head,x);
    printLinkedList(head);
}