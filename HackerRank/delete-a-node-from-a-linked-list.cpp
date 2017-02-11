/*
  Delete Node at a given position in a linked list
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Delete(Node *head, int position)
{
  if (position == 0)
  {
      if (head->next != NULL)
      {
          head = head->next;
      }
      else
      {
          head = NULL;
      }
  }
  else
  {
      Node* inptr = head;
      while (position > 1)
      {
          inptr = inptr->next;
          position--;
      }
      inptr->next = inptr->next->next;
  }

  return head;
}
