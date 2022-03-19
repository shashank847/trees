#include<stdio.h>
void circle(int *r,int r1);
void main()
{
    int *r,r1;
    r=&r1;
    printf("enter radius");
    scanf("%d",r);
    circle(r,r1);
}
void circle(int *r,int r1)
{
    float area;
    area=(3.14*(r1)*(r1));
    printf("AREA=:%f",area);
}
