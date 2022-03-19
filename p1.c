#include<stdio.h>

void sum(int *c,int *d);
int main()
{
    int a,b,*c,*d;
     printf("Enter 2no.'s");

   c=&a;
   d=&b;
    scanf("%d%d",c,d);
    sum(c,d);

}
void sum(int *c,int *d)
{
    int sum1;

    sum1=*c+*d;

     printf("sum of the no.'s=%d",sum1);

}
