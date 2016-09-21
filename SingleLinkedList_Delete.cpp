#include<iostream>

using namespace std;

struct Node{
    int data;
    struct Node* next;
};

struct Node* head;


void InsertLast(int data)
{


    Node* temp = new Node();
    temp->data = data;
    temp->next = NULL;
    if (head == NULL)
    {
        temp->next = head;
        head = temp;
        return;
    }
    Node* temp2 = head;
    while (temp2->next != NULL)
    {
        temp2 = temp2->next;
    }
    temp2->next = temp;

}
void Print()
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout << temp->data;
        temp = temp->next;
    }

}
void Delete(int n)
{
    Node* temp1 = head;

    if (n == 1)
    {
        head = temp1->next;
        return ;

    }
    for(int i=0;i<n-2;i++)
    {
        temp1 = temp1->next; // temp1 points to (n-1)th Node
    }

    Node* temp2 = temp1->next; //nth Node

    temp1->next = temp2->next;

}

int main()
{
   head = NULL;

    InsertLast(5);
    InsertLast(3);
    InsertLast(3);
    InsertLast(3);

    int n;
    cin >> n;

    Delete(n);
    Print();

    return 0;
}
