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
        int brr[m][n];     
    for(int i=0;i<n;i++)     {
        for(int j=0;j<m;j++)      {
           brr[i][j]=arr[j][i];   }
        printf("\n");  }
        
    for(int i=0;i<n;i++)     {
        for(int j=0;j<m;j++)      {
            printf("%d",brr[i][j]);    }
            printf("\n");   }
            return 0;   }