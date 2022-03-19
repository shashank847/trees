
#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node* next;
};

void swap(int* a, int* b);


void pairWiseSwap(struct Node* head)
{
    struct Node* temp = head;


    while (temp != NULL && temp->next != NULL) {

        swap(&temp->data, &temp->next->data);


        temp = temp->next->next;
    }
}

void swap(int* a, int* b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}


void insert(struct Node** head_ref, int new_data)
{

    struct Node* new_node =(struct Node*)malloc(sizeof(struct Node));

    new_node->data = new_data;

    new_node->next = (*head_ref);

    (*head_ref) = new_node;
}

void printList(struct Node* node)
{
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
}

int main()
{
    struct Node* start = NULL;

      insert(&start, 8);
    insert(&start, 7);
    insert(&start, 6);
    insert(&start, 5);
    insert(&start, 4);
    insert(&start, 3);
    insert(&start, 2);
    insert(&start, 1);

    printf("Linked list before calling pairWiseSwap()\n");
    printList(start);

    pairWiseSwap(start);

    printf("\nLinked list after calling pairWiseSwap()\n");
    printList(start);

    return 0;
}
