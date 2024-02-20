#include <stdio.h>


int main() {
  int age;

  printf("Enter your age: ");
  scanf("%d", &age);


  if (age >= 0 && age < 13) {
    printf("Your are %d years old. You are a kid\n", age);
  } else if (age >= 13 && age < 18) {
    printf("Your are %d years old. You are a teenager\n", age);
    
  } else if (age >= 18 && age < 60) {
    printf("Your are %d years old. You are an adult\n", age);
  } else {
    printf("Your are %d years old. You are an elder\n", age);
  }
}