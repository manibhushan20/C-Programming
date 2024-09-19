#include<stdio.h>

float force(int mass)  {
   float result=mass*9.8;
return result;
}

int main(){
    int mass;
    printf("Enter the mass ");
    scanf("%d", &mass);
float gravity= force(mass);
printf("The force of attraction is %f",gravity);
return 0;
}