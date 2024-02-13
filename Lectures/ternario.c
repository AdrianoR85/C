#include <stdio.h>;
#include <string.h>

int main() {
  int age;
  char result[100];

  printf("Enter your age: ");
  scanf("%d", &age);

  strcpy(result, age >= 18 ? "\nYou Can drive" : "\nYou cannot drive");

  printf("%s\n", result);

  return 0;
}