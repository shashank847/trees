#include<stdio.h>
#include<stdlib.h>

typedef struct employee
{
    char name[50];
    int id;
} e1;
void Read(e1*a[50], int n);
void Disp(e1*a[50], int n);
void main()
{
    int n;
    printf("Enter the number of employees");
    scanf("%d",&n);
    e1 a[50];
    e1 *b;
    b=&a;
    Read(b,n);
    Disp(b,n);
}

void Read(e1*a[50], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("\nEnter emplpoyee name and id for employee-%d:",i+1);
        scanf("%s\t%d",a[i]->name,&a[i]->id);
    }
}

void Disp(e1*a[50], int n)
{
    int i;
    printf("\nEmployee details are:");
    for(i=0;i<n;i++)
    {
        printf("\n%s\t%d",a[i]->name,a[i]->id);
    }
}


