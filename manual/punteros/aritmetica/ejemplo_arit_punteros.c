#include <stdio.h>

int main(void)
{
  int arraynum[2];
  char arraychar[2];

  int *pnum;
  char *pchar;
  unsigned int pnum1, pnum2, pchar1, pchar2;

  /* Mostramos los tamaños de int y char */

  printf("Tamaño de int: %d\n", sizeof(int));
  printf("Tamaño de char: %d\n", sizeof(char));
  
  /* Apuntamos con los punteros al principio de los arrays */

  pnum = &arraynum[0];
  pchar = &arraychar[0];

  /* Calculamos el valor de los punteros a un elemento
     y el siguiente */

  pnum1 = (unsigned int) pnum;
  pnum2 = (unsigned int) (pnum+1);

  pchar1 = (unsigned int) pchar;
  pchar2 = (unsigned int) (pchar+1);

  /* Mostramos la resta entre un puntero al elemento n+1
     y uno al elemento n */

  printf("Distancia entre punteros sucesivos a int : %u\n", pnum2 - pnum1);
  printf("Distancia entre punteros sucesivos a char: %u\n", pchar2 - pchar1);
	 
  return 0;
}