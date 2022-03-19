

#include<stdio.h>
#include<string.h>

struct employee
{
    int id;
    char name[50];
}e1[10];
int main()
{
    int i,n;
    printf("Enter no of employes");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter employee name:\n");
        scanf("%s",&e1[i].name);
        printf("Enter employee id");
        scanf("%d",&e1[i].id);


    }
      for(i=0;i<n;i++)
    {
        printf("\nEmployee name=%s\nEmployee id=%d\n",e1[i].name,e1[i].id);

    }


}
