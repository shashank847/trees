

#include <stdio.h>
#include <stdlib.h>
void read(int a[] , int b );
void print(int a[] , int b );
void pos(int a[] , int b );
void neg(int a[] , int b
             );
int main()
{
    int arr[100];
    int n;
    printf("Enter the array size: \n ");
    scanf("%d",&n);
    read(arr,n);
    print(arr,n);

    pos(arr,n);
    neg(arr,n);

    return 0;
}
void read(int a[] , int b )
{
    int i;
    printf("\n Enter %d Array elements : \n",b);
    for(i=0;i<b;i++)
    {
        scanf("%d",&a[i]);
    }
}
void print(int a[] , int b)
{
    int i;
    printf("\n Displaying  %d Array elements : \n",b);
    for(i=0;i<b;i++)
    {
        printf("%d  \t",a[i]);
    }

}
void neg(int a[] , int b)
{
    int i,neg;
    neg=0;
    for(i=0;i<b;i++){
        if(a[i]<0)
        {
            neg++;

        }

    }
    printf("\n Negative number count :  %d ",neg);

}
void pos(int a[] , int b)
{
    int i,pos;
    pos=0;
    for(i=0;i<b;i++){
        if(a[i]>0)
        {
            pos++;

        }

    }
    printf("\n Positive number count :  %d ",pos);
}

