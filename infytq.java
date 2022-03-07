/*
There is a array you need to find the sub array such that the sum of all the elements of the sub array is not greater than given number i.e element.

*/


import java.util.*;
public class Main
{
	public static void main(String[] args) {
         Scanner sc=new Scanner(System.in);
         int num =sc.nextInt();
         int arr[]=new int[num];
         for(int i=0;i<num;i++)
         {
             arr[i]=sc.nextInt();
         }
         int element=sc.nextInt();
         int count=0;
         for(int i=0;i<(1<<num);i++)
         { int sum=0;
             for(int j=0;j<num;j++)
             {
                 if((i&(1 << j)) >0)
                 {
                     sum=sum+arr[j];
                     if(sum>element)
                     break;
                 }
                
             }
              if (sum<=element&&sum!=0)
                        count++;
         }
		System.out.print(count);
	}
}
