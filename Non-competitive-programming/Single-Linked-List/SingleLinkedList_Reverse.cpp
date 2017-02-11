#include<iostream>

using namespace std;

struct Node{
    int data;
    struct Node* next;
};

struct Node* head;


void Reverse()
{
    Node* current;
    Node* prev;
    Node* next;
    current = head;
    prev = NULL;

    while (current!= NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    head = prev;
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
    Insert(1,1);
    Insert(2,2);
    Insert(2,3);
    Print();
    Reverse();
    cout << "Reversed list is " << endl;
    Print();

}
