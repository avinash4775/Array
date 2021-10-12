#include <stdio.h>
int main()
{int n,i,num=0;
printf("Enter the number of elements in array: ");
scanf("%d",&n);
int arr[n];
printf("Enter the elements of the array: ");
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
printf("Enter the number that you want to insert at beginning of the array:");
scanf("%d",&num);
for(i=n-1;i>=0;i--){
    arr[i+1]=arr[i];
}
n=n+1;
arr[0]=num;
for(i=0;i<n;i++){
    printf("%d,",arr[i]);
}
    return 0;
}
