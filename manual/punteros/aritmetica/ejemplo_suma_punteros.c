#include <stdio.h>

void copiar (char* dest, const char* orig) {
  if(orig != NULL && dest != NULL) {
    while(*orig != '\0') {
      *dest = *orig;
      dest++;
      orig++;
    }
    *dest = '\0';  /* terminamos la cadena */
  }
}

int main(void)
{
  char * origen = "Datos";
  char destino[100];  /* usar "char * destino" sin inicializarlo
		       * a una direccion de memoria valida sería 
		       * un error */

  copiar(destino, origen);

  printf("Origen: %s\n", origen);
  printf("Destino: %s\n", destino);

  return 0;
}
