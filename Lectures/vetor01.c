#include <stdio.h>

int main() {
  float grades[4] = {4.5, 5.0, 4.0, 6.0};
  float sumGrades = 0;
  
  for(int i = 0; i < 4 ; i++) {
    sumGrades = sumGrades + grades[i];  
  }

  printf("The average of grades is: %.2f\n", (sumGrades / 4));

  return 0;
}