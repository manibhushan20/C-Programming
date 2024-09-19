#include<stdio.h>

typedef struct complex {
    int real;
    int imag;
}complex;
void show(complex c)  {
    printf("The real part of given complex number is:%d\n",c.real);
    printf("The imaginary part of given comlex number is:%d",c.imag);
}
int main()  {
    complex c1;
    c1.real=5;
    c1.imag=2;
    show(c1);
    return 0;   
}