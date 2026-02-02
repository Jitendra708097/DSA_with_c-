// Insert element at the start in linked list.

#include <iostream>
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
        cout << temp->data << " ";
        temp = temp->next;
    }
}

// reverse linked list function 
Node *reverseLinkedList(Node *head)
{
    
}

int main()
{
    Node *head;
    head = NULL;

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};

    for (int i = 0; i < 15; i++)
    {
        // linked list not exists.
        if (head == NULL)
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

    // this function reverse the linked list.
    Node *temp = reverse_linked_list(head);
    return 0;
}