#include<stdio.h>

  void printAdd(int i) {
      printf("The address of variable is %d",&i);
}

int main(){
    int i=5;
        printf("The address of variable is %d\n",&i);
printAdd(i);
    return 0;
}