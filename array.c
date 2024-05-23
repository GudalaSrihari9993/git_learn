#include<stdio.h>
void evenodd(int *arr , int n)
{
      int i;
      for(i=0;i<n;i++)
      {
          if(arr[i]%2==0)
          {
             printf("even\n");
          }
          else
          {
            printf("odd\n");
          }
      }
}
int main()
{
     int arr[100],n,res;
     printf("enter the number of elements:");
     scanf("%d",&n);
     for(int i;i<n;i++)
     {
        scanf("%d",&arr[i]);
     }
     evenodd(arr,n);
     

     
}
