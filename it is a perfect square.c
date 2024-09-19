#include<stdio.h>
#include<math.h>

int main(){
	float a;
	printf("Number:");
	scanf("%f",&a);
	float b=sqrt(a);
	// printf("\n%f",b);
	if((a/b)==b)
	printf("\n%f is Perfect square",a);
	else
	printf("\n%f is not a perfect square",a);
	return 0;
}