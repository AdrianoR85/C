#include <stdio.h>
#include <stdlib.h>
int menu() {
  int option;
  printf("\nAdd a new grades for a new student?");
      printf("\n[0]: No");
      printf("\n[1]: Yes");
      printf("\nOption: ");
      scanf("%d", &option);
  return option;
}

float studentsGrades(int counter) {
  float score, totalGrade;
  totalGrade = 0.0;

  printf("\nEnter the grade the student %d", counter);
  printf("\n-------------------------------\n");
    for (int i = 1; i <= 4; i++) {
      printf("Enter the score %i: ", i);
      scanf("%f", &score);
      totalGrade += score;
    }
  
  return totalGrade;
}

float result(float grades) {
  float avg;
  avg = grades / 4;

  printf("\nAverage grade: %.2f\n", avg);
  if (avg >= 7 ) {
    printf("Passed\n");
  } else {
    printf("Failed\n");
  }

  return avg;
}

int main() {
    int opt, grades;
    float classAvg = 0;
    int next = 1;
    int counter = 0;

    printf("=======================\n");
    printf("     Score Class\n");
    printf("=======================\n");

    while(next) {
      opt = menu();
      switch (opt) {
        case 0:
          // printf("\nFinishing....\n\n");
          next = 0;
          exit(999);
        case 1:
          counter += 1;
          grades = studentsGrades(counter);
          classAvg += result(grades);
          break;
        default:
          printf("\nInvalid option. Try again.\n");
          continue;
      }
    };
  
  if (counter > 0) {
    printf("Average grade of the Class: %.2f\n", classAvg / counter);
  }
} 