#include<stdio.h>
int add(int x,int y);

int main()   {
    int a,b,result;
    printf("Enter two values that you want to add:");
    scanf("%d %d",&a,&b);
    result=add(a,b);
    printf("Result of addition is %d",result);
    return 0;}
    
    int add(int x,int y)    {
        int sum;
        sum=x+y;
        return sum;   
    }