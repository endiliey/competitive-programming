#include<iostream>

using namespace std;

//Initialize Single Linked List//
struct Node {
    int data;
    struct Node* next;
};

struct Node* head;

// Insertion at Last or any nth point
void InsertLast(int data)
{
    Node* temp3 = new Node();
    temp3->data = data;
    temp3->next = NULL;

    Node* temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = temp3;
}
void Insert(int data,int n)
{
    Node* temp1 = new Node();
    temp1->data = data;
    temp1->next = NULL;

    if (n ==1) {
        temp1->next=head;
        head = temp1;
        return ;
    }
    Node* temp2= head;
    for(int i=0;i<n-2;i++)
    {
        temp2 = temp2->next;
    }
    temp1->next = temp2->next;
    temp2->next = temp1;
}
void Print()
{
    Node* temp = head;
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }

}

int main()
{
    head = NULL;
    Insert(2,1);
    Insert(3,2);
    Insert(4,1);
    Insert(5,2);
    InsertLast(6);
    InsertLast(8);

    Print();

    return 0;

}
