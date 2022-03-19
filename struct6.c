#include <stdio.h>
#include <stdlib.h>
struct employee {
   int id;

   char name[30];
};
void read(struct employee e[],int n);
void disp(struct employee e[],int n);
int main()
{
   struct employee *e,e1;
   e=&e1;
   int i, n;

   printf("Enter the number of employees: ");
   scanf("%d", &n);

   e = (struct employee*) malloc(n*sizeof(struct employee));

   read(e,n);
   disp(e,n);
}
void read(struct employee e[],int n)
{
    int i;
   for(i=0;i<n;i++)

   {
       printf("Enter name of employee: \n ");
       scanf("%s", (e+i)->name);
       printf("Enter employee id:");
       scanf("%d", &(e+i)->id);
   }
}
void disp(struct employee e[],int n)
{
    int i;
   printf("Displaying Information:\n");
   for(i = 0; i < n; ++i)
       printf("Employee Name: %s\nEmployee id: %d\n", (e+i)->name, (e+i)->id);
}

