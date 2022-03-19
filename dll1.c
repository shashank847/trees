

#include <stdio.h>
#include <stdlib.h>

struct node
{
  int data;
  struct node *prev;
  struct node *next;
} *head, *last;

void list (int n)
{
  int i, data;
  struct node *new_node;
  if (n >= 1)
    {
      head = (struct node *) malloc (sizeof (struct node));
      printf ("Enter data of node 1 : ");
      scanf ("%d", &data);
      head->data = data;
      head->prev = NULL;
      head->next = NULL;
      last = head;
      for (i = 2; i <= n; i++)
      {
          new_node = (struct node *) malloc (sizeof (struct node));
          printf ("\nEnter data of node %d : ", i);
          scanf ("%d", &data);
          new_node->data = data;
    new_node->prev = last;
    new_node->next = NULL;
    last->next = new_node;
    last = new_node;
    }}
}

void print_List ()
{
  struct node *temp;
  int n = 1;
  if (head == NULL)
    {
      printf ("\nList is empty\n");
    }
  else
    {
      temp = head;
      printf ("The Doubly Linked List is :\n");
      while (temp != NULL)
  {
    printf ("%d   ", temp->data);
    n++;
    temp = temp->next;
  }
    }
}
void insert_Beginning (int data)
{
  struct node *new_node;
  if (head == NULL)
    {
      printf ("Please enter data for node \n");
    }
  else
    {
      new_node = (struct node *) malloc (sizeof (struct node));
      new_node->data = data;
      new_node->next = head;
      new_node->prev = NULL;
      head->prev = new_node;
      head = new_node;
    }
}

int main ()
{
  int n, data, choice = 1;
  head = last = NULL;
  printf ("Enter the size of linked list : \n");
  scanf ("%d", &n);
  list (n);
  print_List ();
  printf ("\nEnter data for insert at the beginning :\n ");
  scanf ("%d", &data);
  insert_Beginning (data);
  print_List ();
  return 0;
}
