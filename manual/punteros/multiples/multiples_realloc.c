#include <stdio.h>
#include <stdlib.h>

#define MAX_LINEA 1024

int main(){

  char **texto;
  int i;

  texto = (char **) malloc((size_t) sizeof(char *));

  for(i=0; i<10; i++) {

    *(texto+i) = (char *) malloc((size_t) sizeof(char) * MAX_LINEA);
    fgets(*(texto+i), MAX_LINEA, stdin);
    texto = (char **) realloc(texto, 
			      (size_t) sizeof(char *) * (i+2));
  }
  
  /* mostramos las lineas */

  for (i=0; i<10; i++) {
    printf("%s", texto[i]);
  }

  /* liberación de la memoria pedida 
   * el orden es importante, primero liberamos 
   * los punteros del array, luego el array */
  
  for (i=0; i<10; i++) 
    free(texto[i]);
  
  free(texto);
    
  return 0;
}
