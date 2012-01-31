#include <stdio.h>

void copiar (char* dest,  char* orig) {
  if(orig && dest) /* por si acaso orig fuera NULL */
    while(*dest++ = *orig++); /* waw */
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
