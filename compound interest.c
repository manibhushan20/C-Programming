#include<stdio.h>
#include<math.h>
int main()
{
    float p,r,t,CI;
 printf("principal:");
 scanf("%f",&p);
 printf("rate:");
 scanf("%f",&r);
 printf("time:");
 scanf("%f",&t);
 CI=p*pow( (1+r/100), t)-p;
 printf("Compound Interest is:%f",CI);
 return 0;
}