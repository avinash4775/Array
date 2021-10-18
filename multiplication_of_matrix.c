#include <stdio.h>

int main()
{
    int a[5][5],b[5][5],i=0,j=0,k=0,c[5][5],r1,c1,r2,c2,sum=0;
    printf("Enter the no of rows and columns in array1:");
    scanf("%d %d",&r1,&c1);
    printf("Enter the elements of the array1: ");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the no of rows and columns in array2:");
    scanf("%d %d",&r2,&c2);
    printf("Enter the elements of the array2 : ");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    if(c1==r2)
    {
       for(i=0;i<r1;i++)
       {
           for(j=0;j<c2;j++)
           {
               for(k=0;k<r2;k++)
           {
               sum=sum+ a[i][k]*b[k][j];
           }
           c[i][j]=sum;
           sum=0;
           }
       }
       for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            printf("%d ",c[i][j]);
        }
    }

    }
    else
    {
        printf("These matrix can't be multiplied:");
    }
    
    
    return 0;
}
