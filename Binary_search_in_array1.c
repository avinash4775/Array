#include<stdio.h>
int main(){
  int arr[20],i,num1,element,left,right,mid;
 printf("Enter the number of element in the array:");
 scanf("%d",&num1);
 printf("Enter the element of the array in increasing order:");
 for (i=0;i<num1;i++)
 scanf("%d",&arr[i]);
 printf("Enter the number that you want to search:");
 scanf("%d",&element);
 left=0;
 right=num1-1;
for(i=0;i<num1;i++)
{
 mid=(left+right)/2;
  if(element<arr[mid])
 {
 right=mid-1;

 }
 else if(element >arr[mid])
 {
 left=mid+1;
 }
 else if (element==arr[mid]){
 printf("%d is present in the array at index %d",element,mid);
 break;
 }
}
if(left>right)
printf("Element not found");
 return 0;
}
