#include<stdio.h>
int main()
{
int n;
printf("Enter a number of column:");
scanf("%d",&n);
int m;
printf("Entet a number of rows:");
scanf("%d",&m);
for(int i=1;i<=n;i++)   {
    for (int i=1;i<=m;i++)
    printf("*");
    printf("\n");
}
return 0;  }
