#include <stdio.h>
int main()
{int i,num,n,j,arr[n];
printf("Enter the number of elements in the array :");
scanf("%d",&n);
printf("Enter the elements of the array:");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("Enter the position at which you want to insert(consider from 0th elements):");
scanf("%d",&j);
printf("Enter the number that you want to insert :");
scanf("%d",&num);

for(i=n-1;i>=j;i--)
{
    arr[i+1]=arr[i];
}
n=n+1;
arr[j]=num;
for(i=0;i<n;i++){
    printf("%d,",arr[i]);
}
    return 0;
}
