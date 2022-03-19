
#include<stdio.h>
struct sll
{
  int num;
  struct sll *next;

};
typedef struct sll *node;

node createnode()
{
    node temp;
    temp =(node)malloc(sizeof(struct sll));
    if (node ==NULL)

    {
        printf("memory not allocated");
    }
}
void insert
