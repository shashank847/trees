
#include<stdio.h>
#include<string.h>

struct employee
{
    int id;
    char name[50];
}e1;
int main()
{
    e1.id=101;
    strcpy(e1.name,"shashank");
    printf("employee id=%d\n",e1.id);
    printf("name=%s\n",e1.name);
    printf("size=%d",sizeof(e1));
}
