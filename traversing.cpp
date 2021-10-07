#include <stdio.h>
int main()
{
  int n,arr[n];
 printf("Enter the no. of elements of the array: "); 
 scanf("%d",&n);
printf("Enter the elements of the array: ");
for(int i=0;i<n;i++)
scanf("%d,",&arr[i]);
printf("Elements of the array are:");
for(int i=0;i<n;i++)
printf("%d,",arr[i]);
   return 0;
}
