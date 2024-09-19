#include<stdio.h>
int main ()   {
    int n,i,j,k;
    printf("Enter the size of the arrays:");
    scanf("%d",&n);
    int a[n],b[n];
    printf("Enter the first array:");
    for(i=0;i<n;i++)  {
        scanf("%d",&a[i]);  }
   printf("Enter the second array:");
   for(j=0;j<n;j++) {
       scanf("%d",&b[j]);   }
       
      int   size=2*n;
 int c[size];
 for( i=0;i<n;i++)  {
    c[k]=a[i];   
    k++;   }
 for( j=0;j<n;j++)  {
    c[k]=b[j];
    k++;  }
    
   for(i=0;i<size-1;i++) {
       for(k=0;k<size-i-1;k++)  {
           if(c[k]<c[k+1])   {
            int   temp=c[k];
            c[k]=c[k+1];
            c[k+1]=temp; } } }
  
 printf("The merged array sorted in descending order"" is:");
 for(k=0;k<size;k++)  {
    printf("%d ",c[k]);  }
    
   return 0;  }
    
    
    
       
       
   