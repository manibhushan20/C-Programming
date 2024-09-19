#include<stdio.h>
int main() {
char a;
printf("Enter the character:");
scanf("%c",&a);
if (a==65 || a==69 || a==73 || a==79 || a==85) {
printf("The cheacters are block vowel letter."); }
else if (a==97  ||  a==101 || a==105 || a==111 || a==117) {
printf("The given chracters are small vowel letter.");  }                               
else {
 printf("Invalid chracter."); }
 return 0;
 }
