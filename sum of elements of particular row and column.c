#include<stdio.h>
int main()    {
    int n;
    printf("Enter number of rows:");
    scanf("%d",&n);
    int m;
    printf("Enter the number of column:");
    scanf("%d",&m);
    int arr[n][m];
    for(int i=0;i<n;i++)     {
        for(int j=0;j<m;j++)      {
            scanf("%d",&arr[i][j]);
        } }
        printf("\n");
        
    for(int i=0;i<n;i++)     {
        for(int j=0;j<m;j++)      {
            printf(" %d ",arr[i][j]);
        } 
        printf("\n");  }
        printf("\n");
        int sum=0;
    for(int i=0;i<n-1;i++)     {
        for(int j=1;j<m;j++)      {
          sum=sum+arr[i][j];
        } }
        printf("%d",sum);
     return 0;    }
        
        
       
        
        
    