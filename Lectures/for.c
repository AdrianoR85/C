#include <stdio.h>
/*The loop for structure is recommend when we already know in advance the quantity of iterations to be done*/
int main() {
  int num;

  printf("\nMultiplication table\n");
  printf("======================\n");
  printf("Choose the multiplication table: ");
  scanf("%d", &num);

  for (int i = 1; i <= 10; i++) {
    printf("%d x %d = %d\n", num, i, num * i);
  }
}