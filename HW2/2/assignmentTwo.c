#include <stdio.h>

int main(void) {

  int minutes;

  printf("Please inputer a number of minutes: ");
  scanf("%d", &minutes);
  printf("Your number of minutes was %d\n", minutes);
  int numHours = (minutes/60);
  int numMintues = (minutes - numHours*60);
  printf("Number of hours is %d\nNumber of minutes is %d\n", numHours, numMintues);

  return 0;
}
