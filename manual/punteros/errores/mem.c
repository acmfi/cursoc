#include <stdlib.h>

char * string;

int main ( void )
{
  /* Solicitamos memoria para el puntero */
  string = (char *) malloc (200 * sizeof (char));

  /* Primera liberaci�n */
  free (string);
  
  /*
   * Segunda liberaci�n:
   *  (al llegar a este punto, el programa dara un Segfault)
   */
  free (string);

  return 0;
}
