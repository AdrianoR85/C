#include <stdio.h>

int calcAverage(float n1, float n2, float n3, float n4, int totalScores) {
  return (n1 + n2 + n3 + n4) / totalScores;
};

float inputScore(int inputNumber) {

  float score;
  printf("Enter score #%d: ", inputNumber);
  scanf("%f", &score);

  return score;
}

char showResult(float avg){
  if( avg >= 7) {
    printf("Average: %.2f \nPassed\n", avg);
  } else {
    printf("Average: %.2f \nFailed!\n", avg);
  }
}

int main() {
  float n1, n2, n3, n4, avg;

  printf("===== SCORES =====\n"); 
  n1 = inputScore(1);
  n2 = inputScore(2);
  n3 = inputScore(3);
  n4 = inputScore(4);

  printf("\n===== RESULT =====\n");
  avg = calcAverage(n1, n2, n3, n4, 4);
  showResult(avg);

  return 0; 
}