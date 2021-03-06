
#include <stdio.h>
#include <stdlib.h>

typedef struct element
{
    int row;
    int col;
    int data;
    struct element *next;
}element;

typedef struct matrix
{
    element *head;
    int rows;
    int columns;
    element *tail;
    int nodecount;
}matrix;



void mat(matrix *,int,int);
void creatematrice(matrix *,int,int,int);
void display(matrix *);

matrix finalmatrix;

void mat(matrix *m,int r,int c)
{
    m->head=NULL;
    m->tail=NULL;
    m->columns=c;
    m->rows=r;
    m->nodecount=r*c;
}

void creatematrice(matrix *m,int d,int r,int c)
{
    element *current=(element *)malloc(sizeof(element));
    current->row=r;
    current->col=c;
    current->data=d;
    current->next=m->head;
    m->head=current;

}

int searchdata(matrix *m,int r,int c)
{
    element *current=m->head;
    while(current!=NULL)
    {

        if(current->col==c && current->row==r)
            return current->data;
        current=current->next;
    }
}
void display(matrix *m)
{
    if(m->head == NULL){
        printf("Matrix is empty \n");
        return;
    }
    int i,j;
    for(i=1;i<=m->rows;i++)
    {
        for(j=1;j<=m->columns;j++)
        {
            printf("%d ",searchdata(m,i,j));
        }
        printf("\n");
    }
}

int main()
{
    int ch,r1,r2,c1,c2,ch2,p,s,data,i,j;
    matrix m1;
    while(1)
    {
        outer:
        printf("1.To insert first & enter values in  matrix \n");
        printf("2.To display a matrix\n");
        printf("3.To exit \n");
        printf("Enter choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                printf("Enter number of rows\n");
                scanf("%d",&r1);
                printf("Enter number of columns\n");
                scanf("%d",&c1);
                mat(&m1,r1,c1);
                p=r1;
                s=c1;
                for(i=1;i<=p;i++)
                {
                    for(j=1;j<=s;j++)
                    {
                        printf("Enter data in %d row %d column  ",i,j);
                        scanf("%d",&data);
                        creatematrice(&m1,data,i,j);

                    }
                }
                break;


          case 2:
                        display(&m1);
                        break;
            case 3:
                exit(0);
                break;
            default:
                printf("Wrong choice\n");
        }
    }
}
