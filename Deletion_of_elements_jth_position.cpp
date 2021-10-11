
#include <stdio.h>
int main()
{
  int n,arr[n],j,i;
 printf("Enter the no. of elements of the array: "); 
 scanf("%d",&n);
printf("Enter the elements of the array: ");
for(int i=0;i<n;i++)
scanf("%d,",&arr[i]);
printf("enter the position that want to delete (consider from 0th position):");
scanf("%d",&j);
for(i=j;i<n;i++)
{
    arr[i]=arr[i+1];
}
n=n-1;
for(int i=0;i<n;i++)
printf("%d,",arr[i]);
return 0;
}
