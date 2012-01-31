#include <stdlib.h>

char * string;

int main ( void )
{
  /* Solicitamos memoria para el puntero */
  string = (char *) malloc (200 * sizeof (char));

  /* Primera liberación */
  free (string);
  
  /*
   * Segunda liberación:
   *  (al llegar a este punto, el programa dara un Segfault)
   */
  free (string);

  return 0;
}
