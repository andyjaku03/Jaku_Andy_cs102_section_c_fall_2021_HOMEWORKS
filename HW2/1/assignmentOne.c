#include <stdio.h>

int main(void) {

  int height, width;
  printf("Please enter the height\n");
  scanf("%d", &height);
  printf("Please enter the width\n");
  scanf("%d", &width);
  int perimeter = (2*height) + (2*width);
  printf("Perimeter %d\n", perimeter);
  return 0;
}
