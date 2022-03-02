#include <stdio.h>
int main()
{
   int i,n,a[50];
   printf("\n\nTo Read and Display Elements of an Array");
   printf("\nEnter the size of array:");
   scanf("%d",&n);
   printf("\nEnter the elements:\n");
   for(i=0;i<n;i++)
    {
        scanf("\n%d",&a[i]);
    }
    printf("\nElements of array are:\n");
    for(i=0;i<n;i++)
        {
            printf("\n%d",a[i]);
        }
   return (0);
}
