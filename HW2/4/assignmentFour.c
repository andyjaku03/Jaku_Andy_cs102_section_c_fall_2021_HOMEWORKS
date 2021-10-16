#include "stdio.h"
int main(void) {

  int totalCents;

  printf("Please enter the amount of money in cents:\n");
  scanf("%d", &totalCents);
  printf("You have %d cents\n\n", totalCents);

  int numQuarters = totalCents/25;
  int centsAfterQuarters = totalCents - numQuarters*25;
  int numDimes = centsAfterQuarters/10;
  int centsAfterDimes = centsAfterQuarters - numDimes*10;
  int numNickels = centsAfterDimes/5;
  int centsAfterNickels = centsAfterDimes - numNickels*5;
  int numCents = centsAfterNickels;

  printf("Fewest Number of Coins:\n");
  printf("%d quarters\n", numQuarters);
  printf("%d dimes\n", numDimes);
  printf("%d nickels\n", numNickels);
  printf("%d cents\n", numCents);

  return 0;
}
