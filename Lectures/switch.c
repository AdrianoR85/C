#include <stdio.h>

char menu() {
  int option;
 
  printf("--------------------------------\n");
  printf("Client Register\n");
  printf("--------------------------------\n");
  printf("1. Query\n2. Update\n3. Insert\n4. Delete\nOptions: ");
  option = getchar();

  return option;
}

int main() {
  char option = menu();

  switch (option) {
    case '1': 
      printf("You choose Query");
      break;
    case '2':
      printf("You choose Update");
      break;
    case '3':
      printf("You choose Insert");
      break;
    case '4':
      printf("You choose Delete");
      break;
    default:
      printf("Invalid option");
      break;
  } 
}