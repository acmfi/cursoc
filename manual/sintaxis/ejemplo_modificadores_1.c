#include <stdio.h>
#define TAM 5

void modificar(const int array[]) {
  int i;
  for(i=0; i<TAM; i++) array[i] = -1; /* Intentamos rellenar el 
				       * array con -1, como ha sido declarado 
				       * constante provocaría un warning a la 
				       * hora de compilar el programa. */
}

int main(void) {

  int i, array[TAM];
  for(i=0; i<TAM; i++) array[i] = i%2; /* Rellenamos el array */
  /* Mostramos el array */
  for(i=0; i<TAM; i++) printf("array[%d] = %d\n",i,array[i]); 
				
  printf("Modificamos el array:\n");

  modificar(array);
  array[0] = 2; /* Aqui array no ha sido declarada constante y 
		 * por tanto no tendriamos ningun problema si
		 * intentamos modificarla. */

  /* Mostramos el array tras las modificaciones */
  for(i=0; i<TAM; i++) printf("array[%d] = %d\n",i,array[i]); 

  return 0;
}
