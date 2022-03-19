

#include <stdio.h>
#include <stdlib.h>
void read(int [], int);
voiddisp(int [], int);
void key(int [] , int);

int main()
{
    int arr[100];
    int n;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    read(arr,n);
    key(arr,n);

    return 0;
}
void read(int a[], int b)
{
	int i;
	printf("Enter %d Array elements : \n",b);

	for(i=0;i<b;i++)
      {
	   scanf("%d",&a[i]);
	}

}
voiddisp(int a[], int b)
{
	int i;
	for(i=0;i<b;i++)
      {
	   printf("%d\t",a[i]);
	}

}
void key(int a[] , int b)
{
    int i,j,key;
    j=0;

    printf("\nEnter the key number : ");
    scanf("%d",&key);
    for(i=0;i<b;i++)
    {
        if(a[i]==key)
        {
            j=i+1;
            printf("\n The key number is present in the given array and is present in the %d position \n",j);

        }
    }

   disp(a,b);
}
