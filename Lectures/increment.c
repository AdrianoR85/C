#include <stdio.h>

int main() {
  int num, c, d;
  num = 10;
  printf("%d\n", num);

  c = ++num;
  printf("%d\n", c);

  d = num++;
  printf("%d\n", d);
  
  num;
  printf("%d\n", num);
  return 0;
};