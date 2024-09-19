#include<stdio.h>
int main()   {
    int arr[2][2]={{1,2},{3,4}};
    int maxcount=0;
    int maxIdx=-1;
    for(int i=0;i<2;i++)    {
        int sum=0;
        for(int j=0;j<2;j++)  {
        sum=sum+arr[i][j];     }
        if(sum>maxcount) {
        maxcount=sum; 
        maxIdx=i;}
        printf("\n");  }
        printf("%d,%d",maxcount,maxIdx);
        return 0;   }
     