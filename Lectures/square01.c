#include <stdio.h>
#include <string.h>

int main() {
  int num, sq;
  char str[100];

  printf("%s\n", str);
  printf("Enter a number: ");
  scanf("%d", &num);

  sq = num * num;

  printf("The square of %d is %d\n", num, sq);

  return 0;
};