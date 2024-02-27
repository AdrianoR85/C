#include <stdio.h>

int main() {
  int sum = 20+20;

  int *partialSum = &sum;

  printf("Pointer Test");
  printf("\n-------------------------");
  printf("\nSum value: %i", sum);
  printf("\nPartial sum value: %i", partialSum);

  return 0;
}