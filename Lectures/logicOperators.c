# include <stdio.h>

int main() {
  int p, q;

  printf("Enter the values of p and q [True: 1] [False: 0]: ");
  scanf("%d %d", &p, &q);

  printf("\n(p)%d AND (q)%d = %d", p, q, p && q);
  printf("\n========================================");

  printf("\n(p)%d OR (q)%d = %d", p, q, p || q);
  printf("\n========================================");

  printf("\nNOT (p)%d = %d", p, !p);
  printf("\n========================================");

  printf("\nNOT (q)%d = %d", q, !q);
  printf("\n========================================");
}