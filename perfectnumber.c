#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter any number:");
    scanf("%d",&n);
    for(i=0;i<n;i++)    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==n)   {
        printf("Perfect Number.");  }
        else  {
            printf("Not a Perfect Number.");    }
            return 0;   }
            