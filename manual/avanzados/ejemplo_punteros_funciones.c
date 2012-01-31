
#include <stdlib.h>
#include <stdio.h>

#define MAXELEM 5

// Función que compara dos enteros.
int compara_enteros(long *a, long *b)
{

  if (*a > *b)
    return -1;
  else if (*a == *b) 
    return 0;
  else
    return 1;
}

//Función que imprime los elementos de un vector.
//Para ello necesita saber cuántos y de qué tamaño, así como cómo imprimirlos.
void showlist(void *lista, int nelem, int size, void (*PRINT)(void *)  )
{
  int i;
  for (i=0; i < nelem; i++)
    PRINT(lista+i*size);
  printf("\n");
}

//Sin comentarios
void imprime_int(int *a)
{
  printf("%d\t", *a);
}

int main(){
  int i;
  unsigned long lista_num[MAXELEM]; //Declaro la lista.
  for (i=0; i<MAXELEM;i++)    //Relleno la lista de manera ``aleatoria''
      lista_num[i] = random() % 400;
  
  printf("--Lista de enteros DESORDENADA----------\n");
  showlist(lista_num,MAXELEM,sizeof(long),imprime_int);

  // Da comienzo la fiesta de orden superior
  qsort(lista_num, MAXELEM, 4, (int (*)(const void *, 
					const void *))compara_enteros);

  printf("--Lista de enteros ORDENADA con qsort---\n");
  showlist(lista_num,MAXELEM,sizeof(int),imprime_int);

  return 0;
}
