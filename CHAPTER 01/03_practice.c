#include<stdio.h>

int main(){
    int centigrade;
printf("Enter temprature in centigrade ");
scanf("%d",&centigrade);
    float fahren=(centigrade*9/5)+32;
printf("Fahrenheit temprature=%f",fahren);
    return 0;
}