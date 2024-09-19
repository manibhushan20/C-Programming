#include <stdio.h>
#include <string.h>

int main() {
  char str[100];
  int i, j, length;
  int isPalindrome = 1;

  printf("Enter a string: ");
  scanf("%s", str);

  length = strlen(str);

  for (i = 0, j = length - 1; i < length / 2; i++, j--) {
    if (str[i] != str[j]) {
      isPalindrome = 0;
      break;
    }
  }

  if (isPalindrome==1) {
    printf("The string is a palindrome.\n");
  } else {
    printf("The string is not a palindrome.\n");
  }

  return 0;
}
