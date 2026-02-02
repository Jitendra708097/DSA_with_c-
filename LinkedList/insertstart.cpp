// Insert element at the start in linked list.

#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;

    // constructor which initialize the value in data 
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

// print linked list elements function 
void printLinkedList(Node *temp)
{
    while (temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    
}


int main()
{
    Node *head;
    head = NULL;

    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};

    for(int i=0;i<15;i++)
    {
        // linked list not exists.
        if(head == NULL)
        {
            head = new Node(arr[i]);
        }
        // linked list exists
        else
        {
            Node *temp = new Node(arr[i]);
            temp->next = head;
            head = temp;
        }
    }

    // print linked list elements 
    printLinkedList(head);

    // insert element at mid 
    int mid = 7;
    Node *temp1 = head;
    while(mid>1)
    {
        temp1 = temp1->next;
        mid--;
    }

    Node *mid1 = new Node(90);
    Node *second = temp1->next;
    temp1->next = mid1;
    mid1->next = second;

    cout<<endl<<"Inserted at position: ";
    printLinkedList(head);
    return 0;
}