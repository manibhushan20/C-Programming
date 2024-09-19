#include <stdio.h>

struct Rectangle {
  int length;
  int width;
};

struct Rectangle getRectangle() {
  struct Rectangle rect = {10, 20};
  return rect;
}

int main() {
  struct Rectangle rect = getRectangle();
  printf("Length: %d\n", rect.length);
  printf("Width: %d\n", rect.width);
  return 0;
}
