#include<stdio.h>
int main()   {
    int arr[5]={1,2,3,2,1};
    int e=0;
    int f=0;
    for (int i=0;i<=4;i++)  {
      if(arr[i]!=arr[4-i])   
      e=1;   
     if(e==1){
      printf("It is not palindrome:\n"); 
      break;
       }  
       else f++;   }
    if(f==5)
    printf("It is a palindrome!\n"); 
    
    return 0;}
         