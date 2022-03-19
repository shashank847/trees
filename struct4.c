#include <stdio.h>
#include <stdlib.h>
struct employee {
   int id;

   char name[30];
};

int main()
{
   struct employee *e;
   int i, n;

   printf("Enter the number of employees: ");
   scanf("%d", &n);

   e = (struct employee*) malloc(n * sizeof(struct employee));

   for(i = 0; i < n; i++)
   {
       printf("Enter name of employee: \n ");
       scanf("%s", (e+i)->name);
       printf("Enter employee id:");
       scanf("%d", &(e+i)->id);
   }

   printf("Displaying Information:\n");
   for(i = 0; i < n; ++i)
       printf("Employee Name: %s\nEmployeeid: %d\n", (e+i)->name, (e+i)->id);

   return 0;
}
