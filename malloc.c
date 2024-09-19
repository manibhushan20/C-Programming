#include <stdio.h>
#include <stdlib.h>

int main() {
  float *arr; // declare a pointer to float
  int n = 5; // the size of the array

  // allocate memory for the array using malloc
  arr = (float*) malloc(n * sizeof(float));

  // check if memory allocation was successful
  if (arr == NULL) {
    printf("Memory allocation failed.\n");
    return 1; // exit program with error code
  }

  // assign values to the array
  for (int i = 0; i < n; i++) {
    arr[i] = i * 1.1;
  }

  // print the values in the array
  for (int i = 0; i < n; i++) {
    printf("%.2f ", arr[i]);
  }
  printf("\n");

  // free the memory allocated by malloc
  free(arr);

  return 0;
}
