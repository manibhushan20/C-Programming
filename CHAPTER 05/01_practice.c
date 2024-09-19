#include<stdio.h>

int average(int a, int b, int c);

int main(){
    
    int a=5, b=5, c=18;
    int avg=average(a,b,c);
    printf("The average of three numbers is %d", avg); 
    return 0;
}

int average(int a, int b, int c)  {
    int avg=(a+b+c)/3;
    return avg;
}