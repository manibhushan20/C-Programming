#include <stdio.h>
#include <string.h>

//void reverse_string(char *str) {
//  int length = strlen(str);
//  int i;
//  for (i = 0; i < length / 2; i++) {
//    char temp = str[i];
//    str[i] = str[length - i - 1];
//    str[length - i - 1] = temp;
//  }
//}

int main() {
  char str[100];
  printf("Enter a string: ");
  scanf("%s", str);
  int length = strlen(str);
  int i;
  for (i = 0; i < length / 2; i++) {
    char temp = str[i];
    str[i] = str[length - i - 1];
    str[length - i - 1] = temp;  }

//  reverse_string(str);
  printf("Reversed string: %s\n", str);
  return 0;
}
