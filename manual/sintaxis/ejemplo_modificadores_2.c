#include <stdio.h>
#define TOTAL 5

void contador(void) {
  static int cuenta = 0;

  cuenta++;
  printf("Cuenta: %d\n",cuenta);
}

int main(void) {
  int i=0;
  for(;i<TOTAL;i++) contador();

  return 0;
}
