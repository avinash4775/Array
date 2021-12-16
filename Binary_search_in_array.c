
#include <stdio.h>

int main()

{
    int arr[10]={10,15,24,30,35,40,45,50,55,60};
    int i,left=0,right=9,mid,num;
    printf("Enter  the number that you want to search in array: ");
    scanf("%d",&num);
    
    for(i=left;i<=right;){
       mid=(left+right)/2;
       
        if(arr[mid]<num){
      
        left=mid+1;
       i++;
        }
       
        else if(arr[mid]>num)
        right=mid-1;
         else if(num==arr[mid])
        {
            printf("%d is present at index %d \n",num,mid);
            break;
        }
    }
    if(left>right)
    printf("%d is not present in the array",num);

    return 0;
}
