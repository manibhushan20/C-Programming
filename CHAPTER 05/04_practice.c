#include<stdio.h>

int fionacci(int n)  {
    if(n==1)
        return 0;
   else if(n==2)
    return 1;
    else 
    return n-1 + n-2;
}
int main(){
    int n;
    printf("Enter the number ");
    scanf("%d",&n);
   printf("Thr %dth element of fibonacci series is %d",n, fionacci(n));
    return 0;
}