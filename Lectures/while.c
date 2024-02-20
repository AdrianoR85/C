#include <stdio.h>

float main() {
    float score[4], avg, totalGrade;
    float totalAvg = 0;
    int option;
    int nextStudent = 1;
    int counter = 0;

    printf("=======================\n");
    printf("     Score Class\n");
    printf("=======================\n");

    while(nextStudent == 1) {
      printf("\nAdd a new grade for a new student?");
      printf("\n[0]: No");
      printf("\n[1]: Yes");
      printf("\nOption: ");
      scanf("%d", &option);

      switch (option) {
        case 0:
          printf("\nFinishing....\n\n");
          nextStudent = 0;
          break;
        case 1:
          counter += 1;
          totalGrade = 0;
          printf("\nEnter the grade the student %d", counter);
          printf("\n-------------------------------\n");
          for (int i = 1; i <= 4; i++) {
            printf("Enter the score %i: ", i);
            scanf("%f", &score[i]);
            totalGrade = totalGrade + score[i];
          }
          avg = totalGrade / 4;
          printf("\nAverage grade: %.2f\n", avg);
          if (avg >= 7 ) {
            printf("Passed\n");
          } else {
            printf("Failed\n");
          }
          totalAvg += avg;
          break;

        default:
          printf("\nInvalid option. Try again.\n");
          continue;
      }
    };
  printf("Average grade of the Class: %.2f\n", totalAvg / counter);
} 